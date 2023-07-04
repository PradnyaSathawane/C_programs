#include<iostream>
using namespace std;
int main()
{
	float pi=3.1452, volu, r, h;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"Enter h: \n";
	cin>>h;
	volu=(pi*r*r*h)/3;
	cout<<"Volume of cone: %f\n"<<volu;
	
	return 0;
}



