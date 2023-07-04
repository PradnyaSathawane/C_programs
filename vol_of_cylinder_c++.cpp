#include<iostream>
using namespace std;
int main()
{
	float pi=3.1452, volu, r, h;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"Enter h: ";
	cin>>h;
	volu=pi*r*r*h;
	cout<<"Volume of cylinder: "<<volu;
	return 0;
}
