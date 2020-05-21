#include <iostream>
using namespace std;

class B{
	public:
   		virtual void f() {cout<<"f()"<<endl;}    };
class D:public B{
	public:
    		void m() {cout<<"m()"<<endl;}    }; 
int main(){
	D *p=dynamic_cast<D*> (new B);
	if (p)   p->m();
 	else
  		cout<<"Error\n";
 	return 0;     
 }
