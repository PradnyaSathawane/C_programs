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
	d=(a+b)*((a*a)-(a*b)+(b*b));
	cout<<"a3+b3: "<<d;
	return 0;
}
