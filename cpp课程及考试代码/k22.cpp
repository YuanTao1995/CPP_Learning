#include  <iostream>
using namespace std;
template<class T>
class Tclass{
	T x,y;
public:
    Tclass (T a,T b):x(a) { y=b; }
    Tclass (T a) { y=(T)0, x=a; }
    void pr( )	{	char c;        c=(y>=(T)0)? '+':'-';
        cout<<x<<c<< (y>(T)0 ?  y : -y) <<"i"<<endl;  }   };
int main( ){
     Tclass<double>  a(10.5,-5.8);     a.pr( );
     Tclass<int>  b(10);     b.pr( );	return 0;   }

//以下为答案
// 10.5-5.8i
// 10+0i