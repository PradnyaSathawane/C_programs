#include<iostream>
using namespace std;
int main()
{
	int i, b;
	cout<<"Enter number:";
	cin>>b;
	for(i=1; i<=b; i++)
	{
		cout<<"Number is: "<<i<<"and the cube of"<<i<<"is"<< i*i*i<<endl;
	}
	return 0;
}
