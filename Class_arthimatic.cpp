#include<iostream>
using namespace std;
class arthimatic
{
	public:
		int a, b, c, d, e, f;
	
	void add()
	{
		c=a+b;
		cout<<"Addition : "<<c;
	}
	void sub()
	{
		d=a-b;
		cout<<"\nSubtraction : "<<d;
	}
	void mul()
	{
		e=a*b;
		cout<<"\nMultiplication : "<<e;
	}
	void div()
	{
		f=a/b;
		cout<<"\nDivision : "<<f;
	}
};
int main()
{
	arthimatic obj; 
	
	cout<<"Enter value for a & b: ";
	cin>>obj.a>>obj.b;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}
