#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i, num;
	double sum=0, a;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=num; ++i)
	{
		a = 1 / pow(i, i);
		cout<<"1"<<"/"<<"i"<<"^"<<"i"<<" = "<<a<<endl;
		sum=sum+a;
	}
	cout<<sum<<endl;
	return 0;
}
