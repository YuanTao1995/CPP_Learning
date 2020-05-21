#include <iostream>
using namespace std;
class CAT
{ public:  CAT(){ itsAge=new int;	*itsAge=5;}
		  ~CAT(){ delete itsAge;	itsAge=NULL;}
		  int GetAge(){ return *itsAge; }
		  void SetAge(int age) { *itsAge=age; }
  protected:  int *itsAge;   };
int main()
{ CAT a;  cout<<"a's age:"<<a.GetAge()<<endl; 	a.SetAge(6);	
CAT b(a); cout<<"a's age:"<<a.GetAge()<<endl;	
cout<<"b's age:"<<b.GetAge()<<endl; a.SetAge(7);
cout<<"a's age:"<<a.GetAge()<<endl; cout<<"b's age:"<<b.GetAge()<<endl; }

//答案
// a's age:5
// a's age:6
// b's age:6
// a's age:7
// b's age:7