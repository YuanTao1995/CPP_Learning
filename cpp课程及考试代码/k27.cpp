#include <iostream>
using namespace std;
class sz { 	int intT1;
public:	sz() { intT1=5;}
		void Set1(int t) {intT1=t;}
		int Get1() { return intT1; }   };
class sz2
{  public:	sz2() { mszT=new sz(); mszT2=new sz();}
		sz *f1() { mszT2=new sz(); mszT2->Set1(1); return mszT2; }
		sz *f2() const { 	return mszT; } 
		const sz *f3() { return mszT; } 
		const sz *f4() const {return mszT2;}
private:
	   sz *mszT; 
	   sz *mszT2;  };
int main()
{  sz t;    sz2 f;	
   sz *s1=f.f1(); 			   cout<<s1->Get1()<<endl; 
   s1->Set1(10);  			   cout<<s1->Get1()<<endl;
   s1=f.f2();  				   cout<<s1->Get1()<<endl;
   s1->Set1(20);  			   cout<<s1->Get1()<<endl;	
   const sz *s2=f.f3();  t=*s2;   cout<<t.Get1()<<endl;  
   s2=f.f1();			t=*s2;  	   cout<<t.Get1()<<endl;  
   sz * const s3=f.f1();  t=*s3;  cout<<t.Get1()<<endl; 
   s3->Set1(30);		   		   cout<<s3->Get1()<<endl;
   return 0;  }
   
//答案：
// 1
// 10
// 5
// 20
// 20
// 1
// 1
// 30