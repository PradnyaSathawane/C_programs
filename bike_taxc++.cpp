#include<iostream>
using namespace std;
int main()
{
	float Rs, tax, total;
	cout<<"Enter price of bike:";
	cin>>Rs;
	if(Rs>100000)
	{
		tax=Rs*0.15;
	}
	else if(Rs>50000 && Rs<=100000)
	{
		tax=Rs*0.10;
	}
	else
	{
		tax=Rs*0.05;
	}
	total = Rs+tax;
	cout<<"Your total price is"<<total;
	cout<<"with tax included of"<<tax;
	return 0;
}
	

