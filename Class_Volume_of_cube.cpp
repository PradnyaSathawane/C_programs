#include<iostream>
using namespace std;
class volume
{
	public:
		int s;
};
int main()
{
	volume obj;
	cout<<"Enter side: ";
	cin>>obj.s;
	
	cout<<"Volume of cube is: "<<obj.s*obj.s*obj.s;
	return 0;
}
