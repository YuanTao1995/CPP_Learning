#include <iostream>
using namespace std;

class B 
{ 
public:  
	B() { cout << "B,"; }   
};

class B1 :virtual public B  
{ 
public:
	B1() { cout << "B1,"; }   
};

class B2 : public B 
{ 
public:
	B2() {  cout << "B2,"; }
};
class B3  
{ 
public:
	B3(int x) {  cout << x<<","; }  
};

class C :public B1, public B2,public B3 
{ 
public: 
	C():B3(5) { cout << "C"; } 
};

int main()
{ 
	C c;     
	return 0;  
}
