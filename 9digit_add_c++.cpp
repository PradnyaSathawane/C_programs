#include<iostream>
using namespace std;
int main()
{
	int num=715104495, a;
	cout<<"9 digit number is: "<<num;
	a=num%10+num/100000000;
	cout<<"\nans= "<<a;
	return 0;
}
