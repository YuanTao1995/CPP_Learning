#include <iostream>
using namespace std;
class Matrix
{   
public:
    friend Matrix operator +(Matrix m1, Matrix m2); 
	friend istream& operator >> (istream&, Matrix &);
    friend ostream&  operator <<(ostream&, Matrix &); 
private:
    int data[2][3] ; //定义矩阵使用的数组       
};

//要想链式输入输出，必须要返回流
istream& operator >> (istream& in, Matrix &m)
{
	for(int i=0;i<2;i++)
		for(int j=0;j<3;j++)  
			in>>m.data[i][j];
	return in;	
} 

ostream&  operator << (ostream& out,Matrix &m)
{	
	for(int i=0;i<2;i++)
	{	
		for (int j=0;j<3;j++)	
			out<<m.data[i][j]<<"\t";
		out<<endl;	
	}	 
	return out;   
}

Matrix operator +(Matrix m1,Matrix m2)
{   
	Matrix r;
	for(int i=0;i<2;i++)
		for (int j=0;j<3;j++)
			r.data[i][j]=m1.data[i][j]+m2.data[i][j];
     return r;   
}

int main()
{
	Matrix m1,m2,m3;
    // cout<<"input m1:\n"; cin >> m1; //can not： cin>>m1>>m2;
    // cout<<"input m2:\n"; cin >> m2;
    cout<<"input m1&m2:\n"; cin >>m1>> m2;//can: cin>>m1>>m2;
    m3 = m1 + m2;    
    cout << "m1+m2=\n"<<m3;
   //can: cout<<m1<<m3;
    return 0;
}
