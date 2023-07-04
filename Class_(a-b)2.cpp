#include<iostream>
using namespace std; 
class formula_2
{
	public:
		int a, b, c;
		
	void formula()
	{
		c=(a*a)-2*(a*b)+(b*b);
		cout<<"(a-b)2: "<<c;
		
	}
};


int main()
{
	formula_2 obj;
	cout<<"Enter a: ";
	cin>>obj.a;
	cout<<"Enter b: ";
	cin>>obj.b;
	obj.formula();
	return 0;
}
