#include<iostream>
using namespace std; 
class swapping
{
	public:
		int a, b;
			
		
	void swap()
	{
		a=a+b;
		b=a-b;
		a=a-b;
		cout<<"\nValues after swapping are: a = "<<a<<" "<<"b = "<<b;
	}
};
int main()
{
	swapping obj;
	cout<<"Enter values for a & b: ";
	cin>>obj.a>>obj.b;
	cout<<"Values before swapping are a = "<<obj.a<<" "<<"b = "<<obj.b;
	obj.swap();
	return 0;
}
