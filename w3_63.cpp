#include<iostream>
using namespace std;
int main()
{
	int num, i;
	cout<<"Enter value: ";
	cin>>num;
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
