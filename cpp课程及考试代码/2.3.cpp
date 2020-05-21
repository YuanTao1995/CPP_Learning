#include <iostream>
#include <string>

int fun(int a=1,int b=2){
	return a+b;
}
using namespace std;

int main(int argc, char const *argv[])
{
	string s1="This is a test string";
	s1.erase(10,4);
	cout<<s1<<endl;
	cout<<fun()<<endl;
	return 0;
}