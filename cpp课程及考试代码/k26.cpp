#include <iostream>
using namespace std;
class Rr
{ public: Rr(int a){	data=a;}
    operator int(){	return data;}
	operator double(){	return double(data);}
  private:	int data;  };
int main()
{	Rr r1(2),r2(4);		int x=int(r1)+int(r2);	
	double y=double(r1)/double(r2); 	cout<<"x="<<x<<",y="<<y<<endl;
    return 0;  }

//答案
// x=6,y=0.5