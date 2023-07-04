#include<iostream>
using namespace std;
class volume
{
	public:
		int r, h;
		float pi=3.1452;
};
int main()
{
	volume obj;
	cout<<"Enter r: ";
	cin>>obj.r;
	cout<<"Enter h: ";
	cin>>obj.h;
	cout<<"Volume of cone is: "<<(obj.pi*obj.r*obj.r*obj.h)/3;
	return 0;
}
