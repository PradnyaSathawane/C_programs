#include<iostream>
using namespace std;
int main()
{
	int i, n, sum=0; 
	cout<<"Enter value: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		if(i%9==0)
		{
			cout<<" "<<i;
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}
