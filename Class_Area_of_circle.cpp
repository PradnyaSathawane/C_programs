#include<iostream>
using namespace std;
class area
{
	public:
		int r;
		float pi=3.1452;
};
int main()
{
	area obj;
	cout<<"Enter radius: ";
	cin>>obj.r;
	cout<<"Area of cricle is: "<<obj.pi*obj.r*obj.r;
	return 0;
}
