#include<iostream>
using namespace std;
int main()
{
	int p, num, s=0;
	cout<<"Enter number: ";
	cin>>num;
	for(p=1; p<=num; p++)
	{
		if(num%p==0)
		{
			s++;
		}
	}
	if(s==2)
	{
		cout<<"Entered number is prime number.";
	}
	else
	{
		cout<<"Entered number is not prime number.";
	}
	return 0;
}
