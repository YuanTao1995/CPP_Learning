#include <iostream>
using namespace std;

class sample
{
public:
	sample(int val);
	~sample();
private:
	int a=2.5; //类内非静态成员变量不能直接初始化
public:
	sample();
};

int main(int argc, char const *argv[])
{
	cout<<"Hello World!"<<endl;
	return 0;
}

