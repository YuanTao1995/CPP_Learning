#include <iostream>
using namespace std;

class BC
{
public:
	int x=1;
protected:
	int y=2;
private:
	int z=3;
};

class DC:public BC
{
public:
	int t=3;
};

int main(int argc, char const *argv[])
{
	DC d;
	cout<<d.x<<" "<<d.y<<" "<<d.z<<" "<<d.t<<endl;
	return 0;
}