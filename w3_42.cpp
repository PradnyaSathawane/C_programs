#include<iostream>
using namespace std;
int main()
{
	int i, j, k, num, s, r=1;
	s=5+4-1;
	cout<<"Enter value: ";
	cin>>num;
	for(i=0; i<=num; i++)
	{
		for(k=s; k>=num; k--)
		{
			cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		s--;
	}
	return 0;
}
