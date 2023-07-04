#include<iostream>
using namespace std;
int main()
{
	int i, num, sum=0;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
		sum+=i*i;
	}
	cout<<"sum is: "<<sum;
	return 0;
}5
