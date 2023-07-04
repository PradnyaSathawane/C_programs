#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter any number: ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\na is oldest .";
		}
		else
		{
			cout<<"\nc is oldest .";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"\nb is oldest.";
		}
		else
		{
			cout<<"\nc is oldest.";
		}
	}
	return 0;
}
