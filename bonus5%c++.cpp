#include<iostream>
using namespace std;
int main()
{
	int years;
	float sal, ser, bonus, total;
	cout<<"Enter your salary: ";
	cin>>sal;
	cout<<"Enter your year of service: ";
	cin>>ser;
	if (years>=5)
	{
		bonus=sal*0.05;
		total= sal+bonus;
		cout<<"\nyour net bouns is : "<<bonus;
	}
	else
	{
		cout<<"\nyou are not eligible for bonus.";
	}
	return 0;
}
