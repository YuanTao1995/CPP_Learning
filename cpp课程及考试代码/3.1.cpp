//时间标记类
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	cout<<"This is now! "<<endl;
	time_t now = time(0);
	cout<<now<<endl;
	cout<<ctime(&now)<<endl;
	return 0;
}