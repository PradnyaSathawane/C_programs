#include<iostream>
using namespace std;
class area
{
	public:
		int l, b;
		
/*	void rect()
	{
		cout<<"Area of rectangle is: "<<l*b;
	}*/
};
int main()
{
	area obj;
	cout<<"Enter l: ";
	cin>>obj.l;
	cout<<"Enter b: ";
	cin>>obj.b;
	cout<<"Area of rectangle is: "<<obj.l*obj.b;
	return 0;
}
