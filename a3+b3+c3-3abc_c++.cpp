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
	d=(a+b+c)*((a*a)+(b*b)+(c*c)-(a*b)-(b*c)-(c*a));
	cout<<"a3+b3+c3-3abc: "<<d;
	return 0;
}
