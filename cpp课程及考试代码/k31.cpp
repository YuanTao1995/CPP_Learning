#include <iostream>
using namespace std;
const double pi=3.14159;
class circle
{	int x,y; //圆心坐标
	double r; //圆半径
  public:
	circle(int i=0, int j=0, double a=0) // 参数缺省值均为0   
	{ x=i; y=j; r=a; }
	int getx() { return x; }
	int gety() { return y; }
	double area();  
};
double circle::area()  { return pi*r*r;}
int main()
{  circle cmin(5,5,10), cmax(5,5,17);
   if ((cmax.getx()==cmin.getx())&&cmax.gety()==cmin.gety()) //圆心坐标相同  
   cout<<"ring area="<<cmax.area()-cmin.area()<<endl;  //输出圆环的面积
}
