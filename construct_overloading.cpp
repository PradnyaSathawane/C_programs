#include<iostream>
using namespace std;
class arithmatic
{
	public:
		arithmatic(int a, int b)
		{
			cout<<a+b<<endl;
		}
		arithmatic(int a, int b, int c)
		{
			cout<<a+b+c<<endl;
		}
		arithmatic(char a, char b)
		{
			cout<<a<<"\n"<<b;
		}
};
int main()
{
	arithmatic a1(3, 4), a2(2, 4, 6), a3('p', 'h');
	return 0;
}
