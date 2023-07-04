#include<iostream>
using namespace std;
int main()
{
	int num=1, i, base, exp;
	cout<<"Enter base: ";
	cin>>base;
	cout<<"Enter exp: ";
	cin>>exp;
	for(i=1; i<=exp; i++)
	{
		num= num*base;
	}
	cout<<base<<"^"<<exp<<"="<<num<<endl;
	return 0;
}
