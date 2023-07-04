#include<iostream>
using namespace std;
int main()
{
	int i, j, num, k=1;
	cout<<"Enter value: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
