#include<iostream>
using namespace std;
int main()
{
	int num, a, x, b=0;
	cout<<"Enter number: ";
	cin>>num;
	for(a=num-1; a>=1; a--)
	{
		for(x=2; x<a; x++)
		{
			if(a%x==0)
			{
				b++;
			}
		}
		if(b==0)
		{
			if(a==1)
			{
				cout<<"no prime number less than 2.";
				break;
			}
			cout<<a<<" is the prime no. before "<<num<<endl;
			break;
		}
		b=0;
	}
	
	return 0;
}
