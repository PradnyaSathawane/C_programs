#include<iostream>
using namespace std;
int main()
{
	int s1, s2, s3;
	cout<<"Enter sides of triangle: ";
	cin>>s1>>s2>>s3;
	if(s1==s2 &&s1==s3)
	{
		cout<<"Given triangle is Equilateral.";
		
	}
	else if(s1!=s2 &&s1!=s3)
	{
		cout<<"Given triangle is Scalen.";
		
	}
	else
	{
		cout<<"Given triaangle is Isoceles.";
	}
	return 0;
}
