#include <iostream>
using namespace std;
#include <string>
class Base
{ private:   char msg[30];
  protected: int n;
  public: Base(char s[],int m=0):n(m) {  strcpy(msg,s); }
  	void output(void)  {  cout<<n<<endl<<msg<<endl;  }  };
class Derived1:public Base
{ private:	int n;
  public:	Derived1 (int m=1): Base("Base",m-1) {  n=m; }
	void output(void) { cout<<n<<endl; Base::output();}  };
class Derived2:public Derived1
{ private:	int n;
  public:	Derived2(int m=2):Derived1(m-1) { n=m; }
	void output(void) { cout<<n<<endl; Derived1::output();} };
int main()
{ Base B("Base Class",1); Derived2 D; B.output(); D.output();}

//答案
// 1
// Base Class
// 2
// 1
// 0
// Base