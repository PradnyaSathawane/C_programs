#include<iostream>
using namespace std;
int main()
{
	float per;
	char grade;
	cout<<"Enter your percentage: ";
	cin>>per;
	
	if(per>=75)
	{
		cout<<"\nGrade = 'A'";
	}
	else if(per>=60 && per<=74)
	{
		cout<<"\nGrade = 'B'";
	}
	else if(per>=45 && per<=59)
	{
		cout<<"\nGrade = 'C'";
	}
	else if(per>=35 && per<=44)
	{
		cout<<"\nGrade = 'D'";
	}
	else
	{
		cout<<"\nGrade = 'F'";
	}
	return 0;
}
