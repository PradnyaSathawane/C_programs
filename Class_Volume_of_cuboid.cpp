#include<iostream>
using namespace std;
class volume
{
	public:
		int l, b, h;
};
int main()
{
	volume obj;
	cout<<"Enter l: ";
	cin>>obj.l;
	cout<<"Enter b: ";
	cin>>obj.b;
	cout<<"Enter h: ";
	cin>>obj.h;
	cout<<"Volume of cuboid is: "<<obj.l*obj.b*obj.h;
	return 0;
}
