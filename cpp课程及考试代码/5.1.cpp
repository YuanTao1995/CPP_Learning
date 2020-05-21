#include <iostream>  // (例5-2)
using namespace std;
class TradesPerson
{  public:
		virtual void sayHi()
		{	cout<<"Just hi."<<endl;	}
};

class Tinker : public TradesPerson
{  public:
		virtual void sayHi()
		{	cout<<"Hi, I tinker."<<endl;	}
};

class Tailor : public TradesPerson
{  public:
		virtual void sayHi()
		{	cout<<"Hi, I tailor."<<endl;	}
};

int main()
{	
	TradesPerson*  p;
	int which;
	do  {
		cout<<"1 == TradesPerson, 2 == Tinker, 3 == Tailor";
		cin>>which;
	} while (which < 1 || which > 3);
	switch (which)
	{	    case 1 : p = new TradesPerson; break;
		    case 2 : p = new Tinker; break;
		    case 3 : p = new Tailor; break;
	}
	p->sayHi();  //动态绑定
	delete p;//需要删除吗？
	return 0;
}
