#include<iostream>
using namespace std;
int main()
{
	int i, j, k, s, r=1;
	s=5+4-1;
	for(i=0; i<5; i++)
	{
		for(k=s; k>=1; k--)
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
