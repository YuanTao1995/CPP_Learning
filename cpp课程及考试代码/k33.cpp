#include <iostream>
using namespace std;
class Fraction{ //“分数”类
  public:	Fraction(double a,double b):num(a),den(b){}
  	//重载取负运算符“-”，返回一个分数对象，其分子是原来分子的相反数。
	Fraction operator-(){ 
    Fraction f((-1)*num, den); 
    return f;
  }  
	void print(){ cout<<num<<'/'<<den<<endl; } 
  private:
	double num; //分子
	double den; //分母
  };
int main(){
  Fraction f1(1,2);
  (-f1).print();   return 0;   
}

