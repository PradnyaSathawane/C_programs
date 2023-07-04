#include<iostream>
using namespace std;
int main()
{
	int total, classes, attend; 
	float per;
	cout<<"Enter number of classes held: ";
	cin>>classes;
	cout<<"Enter no. of attented classes: ";
	cin>>attend;
	per=attend/total*100;
	cout<<"percent= "<<per;
	if(per<75)
	{
		cout<<"student is not allowed to sit in exam.";
	}
	else
	{
		cout<<"student is allowed tomsit in exam.";
	}
	return 0;
}
