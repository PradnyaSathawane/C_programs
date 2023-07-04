#include<iostream>
using namespace std;
class area
{
	public:
		int s;
};
int main()
{
	area obj;
	cout<<"Enter side: ";
	cin>>obj.s;
	cout<<"Area of square is: "<<obj.s*obj.s;
	return 0;
}
