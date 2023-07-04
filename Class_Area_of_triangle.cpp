#include<iostream>
using namespace std;
class area
{
	public:
		int l, b;
};
int main()
{
	area obj;
	cout<<"Enter l: ";
	cin>>obj.l;
	cout<<"Enter b: ";
	cin>>obj.b;
	cout<<"Area of triangle is: "<<0.5*obj.l*obj.b;
	return 0;
}
