#include<iostream>
using namespace std;
int main()
{
	int i, num, ans=0, rem;
	cout<<"Enter value: ";
	cin>>num;
	for(; num>0; num=num/10)
	{
		rem=num%10;
		ans=ans+rem;
	}
	cout<<ans;
	return 0;
}
