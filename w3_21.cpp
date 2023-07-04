#include<iostream>
using namespace std;
int main()
{
	int num, i, sum=0;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
	
		cout<<2*i<<" ";
		sum+=2*i;
	}
	cout<<sum;
	return 0;
}
