#include<iostream>
using namespace std; 
class volume
{
	public:
		int r, h;
		float pi=3.1452;	
		
	void cyl()
	{
		cout<<"Volume of cylinder is: "<<pi*r*r*h;
	}
};
int main()
{
	volume obj;
	cout<<"Enter radius: ";
	cin>>obj.r;
	cout<<"Enter height: ";
	cin>>obj.h;
	obj.cyl();
	return 0;
}
