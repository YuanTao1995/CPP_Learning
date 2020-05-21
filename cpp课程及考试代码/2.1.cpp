#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;


//输入输出操纵符
//const相关知识

int main()
{	
	// const  int  x=5,y=10;
	// const int *ptr=&x;
	// int* ptr2=const_cast<int*>(ptr);
	// *ptr2=4;  //OK , no error
	// cout<<*ptr2<<"\t"<<*ptr<<"\t"<<x<<endl<<ptr2<<"\t"<<ptr<<"\t"<<&x<<endl;  //输出4	5，
	// 			//如将x的const去掉，输出4	4
	// //ptr2=&y;  //error
	// float a=1.05,b=10.15,c=200.87;
	// cout<<setfill('*')<<fixed<<setprecision(2);
	// cout<<setw(10)<<a<<endl;
	// cout<<setw(10)<<b<<endl;
	// cout<<setw(10)<<c<<endl;

	float a=5,b=43.3,c=10304.31;
	cout<<setprecision(2);
	cout<<setw(10)<<a<<endl;
	cout<<setw(10)<<b<<endl;
	cout<<setw(10)<<c<<endl;

	// double amount=22.0;
	// cout<<showpoint;
	// cout <<amount<<endl;
	// cout <<setprecision(0) <<amount <<endl <<setprecision(1) << amount<<endl<<setprecision(2) <<amount <<endl <<setprecision(3) <<amount <<endl<<setprecision(4) <<amount <<endl;
	// cout<<setprecision(8)<<amount<<endl;
	// cout <<"fixed:"<<fixed;
	// cout <<setprecision(8) <<amount <<endl;
	// const int x=5,y=10;
 // 	int* const  ptr=&x;
	// *ptr=4;	//OK
	// ptr=&y;  //Error
	// const  int  x=5,y=10;
	// int * const ptr=&x;
	// int* ptr2=const_cast<int*>(ptr);
	// *ptr2=4;  //OK , no error
	// cout<<*ptr<<"\t"<<*ptr2<<"\t"<<x<<endl;  //输出4	5，
				//如将x的const去掉，输出4	4
	//ptr2=&y;  //error


	return 0;
}