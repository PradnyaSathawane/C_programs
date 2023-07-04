#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter value for a: ";
	cin>>a;
	cout<<"Enter value for b: ";
	cin>>b;
	cout<<"Values Before swapping: a= , b= "<<a<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\nValue After swapping: a= , b= "<<a<<b;
	return 0;
}
