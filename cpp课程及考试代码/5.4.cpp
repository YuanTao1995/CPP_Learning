//运行期类型检查的dynamic_cast检查
#include <iostream>
#include <string>
using namespace std;
class Book {
	public: 　　
		Book(string t) {title = t;}　 
		virtual void printTitle() const {　　　　 
			cout << "Title: " << title << endl; }
	private:　　
		Book(); 　　
		string title;
};

class Textbook : public Book {
public:　　
	Textbook(string t,int l) : Book(t),level(l) {} 　　
	virtual void printTitle() const {
		cout << "Textbook " ; 　　　　
		Book::printTitle();　　
	}　　
	void printLevel() const {  //子类新加  　　　　
		cout << "Book level: " << level << endl; 
	}
private: 　　
	Textbook();
	int level;
};

class PulpFiction : public Book{
	public:
		PulpFiction(string t) : Book(t) {}
		virtual void printTitle() const { 　　　　
			cout << " PulpFiction " ; 
			Book::printTitle();　　 
		}
	private:　 
		PulpFiction();
};

void printBookInfo(Book * bookPtr) {
	bookPtr -> printTitle();　　
	Textbook * ptr = dynamic_cast<Textbook*>(bookPtr);
	if(ptr) 　　　　
		ptr -> printLevel();
}

int main()  {
	Book * ptr; 　　
	int level, ans; 　　
	string title;
	cout << "Book's titles? (no white space) ";　cin >> title; 　　
	do {  
		cout << "1 == Textbook, 2 == PulpFiction " << endl;　　　　 
		cin >> ans;　
	} while( ans < 1 || ans > 2);　　 
	if (1 == ans) {　　　　 
		cout << "Level ?";　cin >> level;
		ptr = new Textbook(title,level);
	} 　　
	else 
		ptr = new PulpFiction(title);
	printBookInfo(ptr);　 
	return 0;
}
