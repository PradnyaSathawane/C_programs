#include<iostream>
using namespace std;
int main()
{
	int i, num, j;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			cout<<" # ";
		}
		cout<<endl;
	}
	return 0;
}
