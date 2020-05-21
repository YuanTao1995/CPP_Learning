#include <iostream>
using namespace std;

class B
{  
public:  
	B() :b(5) {};
	int b; 
};

class B1 :virtual public B
{  
public: 
	void t() { b = 15; cout <<"b="<<b<<"\tB1::b="<< B1::b <<"\tB1::B::b="<<b<< endl; }
	int b;  
};

class B2 :virtual public B
{  
public:
	void t() { cout <<"b="<<b<<"\tB2::b="<< B2::b <<"\tB::b="<<b<< endl; }  
};

class C :public B1, public B2
{  
public:
	void t() { cout <<"b="<< b << "\tB1::b="<< B1::b << "\tB1::B::b="<<B1::B::b<<"\tB2::b=" << B2::b <<"\tB::b="<<B::b<< endl; }
};

class B3
{
public:
	char c;
	int b;
	//void t(){cout << b;}
};
int main()
{  
	B1 b1; b1.t();		
	B2 b2; b2.b = 20; b2.t(); 		
	C c;	c.t();
	// c.b = 10;  cout << c.b << '\t'<< c.B1::b << '\t' <<c.B1::B::b<<'\t'<< c.B2::b << endl;	
	c.B1::b = 1; 	c.t(); 
	//cout<<"*"<<c.B1::B::b<<endl;  
	//cout<<sizeof(B)<<endl;  
	//cout<<sizeof(B1)<<endl;  
	//cout<<sizeof(B2)<<endl;  
	//cout<<sizeof(B3)<<endl;  
	//cout<<sizeof(C)<<endl;  
	return 0; 
}
