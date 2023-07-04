#include<iostream>
using namespace std;
int main()
{
	int num, i, sum=0;
	cout<<"Enter value: ";
	cin>>num;
	for(i=0; i<=num; i++)
	{
	
		cout<<2*i-1<<" ";
		sum+=2*i-1;
	}
	cout<<sum;
	return 0;
}
