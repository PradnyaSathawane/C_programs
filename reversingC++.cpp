#include<iostream>
using namespace std;
int main()
{
	int num=415, a, b, c, rev=0;
	cout<<"Number before reversing: "<<num;
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	rev=a*100+b*10+c*1;
	cout<<"\nNumber after reversing: "<<rev;
	
	return 0;
}
