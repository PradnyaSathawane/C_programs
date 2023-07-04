#include<iostream>
using namespace std;
int main()
{
	int i, ans=1;
	cout<<"Enter value: ";
	cin>>i;
	for(; i>0; i=i/10)
	{
		ans=ans*i;
	}
	cout<<"\nfactorial is: ";
	cout<<ans;
	return 0;
}
