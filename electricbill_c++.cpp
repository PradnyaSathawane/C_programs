#include<iostream>
using namespace std;
int main()
{
	float unit, price, metre, total, tax;
	cout<<"Enter consume units: ";
	cin>>unit;
	if(unit>0 &&unit<=100)
	{
		price=unit*3.5;
	}
	else if(unit>100 && unit<=200)
	{
		price=unit*5;
	}
	else if(unit>200 && unit<=400)
	{
		price=unit*10;
		
	}
	else
	{
		price=unit*15;
	}
	
	if(price<=1000)
	{
		tax=price*0.09;
		metre=price*0.1;
	}
	else
	{
		tax=price*0.18;
		metre=price*0.2;
	}
	total=price+tax+metre;
	cout<<"This is your total bill: "<<total;
	return 0;
}
