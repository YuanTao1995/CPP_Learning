#include<iostream> 
using namespace std; 

class AA {  
		int n; 
	public: AA(int k):n(k) { } 
		int get( ) { return n; } 
		int get( ) const { return n+1; } 
	}; 

int main( ) 
{ 	AA a(5);	const AA b(6); 
	cout<<a.get()<<","<<b.get(); 
	return 0; 
} 
