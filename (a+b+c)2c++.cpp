#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter c: ";
	cin>>c;
	d=((a*a)+(b*b)+(c*c))+2*((a*b)+(b*c)+(c*a));
	cout<<"(a+b+c)2: "<<d;
	
	return 0;
}
