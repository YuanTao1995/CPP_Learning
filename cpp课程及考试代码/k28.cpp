#include <iostream>
using namespace std;
class A {  public: virtual void print(int x) {cout <<"A:"<< x << '\t' ;} };
class B:public A { public: virtual void print(float x) {cout <<"B:"<< x << '\t';} };
class C:public A{ public: virtual void print(int x) {cout <<"C:"<< x <<endl;} };
void show(A &a) { a.print(3);  }
int main( )
{	A a;	B b;	C c;
	a.print(1);		b.print(2);		c.print(3);
	show(a);  show(b);  show(c);  return 0;}


//答案：
// A:1	B:2	C:3
// A:3	A:3	C:3
