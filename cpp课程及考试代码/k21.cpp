#include <iostream> 
using namespace std;
class A{	
protected:
		int a;
public:
		A(int p1) { a=p1; }
		int inc1(void) { return ++a; }	};
class B1:public A{	
protected:	int b1;
public:	B1(int p1,int p2):A(p1) { b1=p2; }
			int inc1(void) { return A::inc1(); }
			void display(void) { cout<<"a="<<a<<" b1="<<b1<<"\n"; }	};
class B2:public A{	
private:	int b2;
public:	B2(int p1,int p3):A(p1) { b2=p3; }
			int inc1(void) { A::inc1(); A::inc1(); return A::inc1(); }
			void display(void) { cout<<"a="<<a<<" b2="<<b2<<"\n"; }	};
class C:private B1,public B2{	
private:	int c;
public:	C(int p11,int p12,int p21,int p22,int p):B1(p11,p12),B2(p21,p22)
			{ c=p; }
	int inc1(void) { return B2::inc1(); }
	void display(void) { B1::display(); B2::display(); cout<<"c="<<c<<"\n";} };
int main(void){	
	C d(1,2,3,4,5);		cout<<"\n";		d.display();		cout<<"\n";
	d.inc1();			d.display();	return 0; }

//以下为答案
//
// a=1 b1=2
// a=3 b2=4
// c=5

// a=1 b1=2
// a=6 b2=4
// c=5