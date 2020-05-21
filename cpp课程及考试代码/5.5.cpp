#include<iostream>
#include<complex>
#include<typeinfo>
using namespace std;
int main()
{   int  a=3;
    complex<double>  c(1,2);  //复数类，STL
    cout<<typeid(c).name()<<" "<<c<<endl;
    cout<<typeid(a).name()<<" "<<a<<endl;
}
