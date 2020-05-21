#include <iostream>
using namespace std;


class A  //（ ppt28问题.txt ）
{  public:
       virtual void act1( ) { cout << "A::act1( ) called." << endl; }
       void act2( ) { act1( ); }     
};
class B : public A
{  public:
       void act1( ) { cout << "B::act1( ) called." << endl;  }     
};
int main ( )
{  B b;
    b.act1( );
    b.act2( );
	return 0;
}
