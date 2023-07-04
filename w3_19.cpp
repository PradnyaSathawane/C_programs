#include<iostream>
using namespace std;
int main()
{
	int num, i, j;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=num; j++)
		{
			if(j<=num-1)
			{
				cout<<j<<"x"<<i<<"="<<i*j<<endl;
			}
			else
			{
				cout<<j<<"x"<<i<<"="<<i*j<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}
