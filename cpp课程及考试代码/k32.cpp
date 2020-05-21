#include <iostream>
using namespace std;
class Test{
public:
	Test(int x){data = x;}  
	~Test() {}
	void print(){ cout<< data; } 
private:
	int data;  
};
int main(){
	Test t[3]={0,1,2};	
	for(int i=0;i<3;i++) t[i].print();
	return 0;  
}

