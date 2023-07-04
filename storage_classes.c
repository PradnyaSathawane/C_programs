//Automatic storage class (auto).

/*#include<stdio.h>
int fun(void);
int main()
{
	auto int x=5;
	printf("\nx=%d",x);
	fun();
	return 0;
}
int fun(void)
{
	auto int x=6;
	printf("\nx=%d", x);
}*/



//external storage class (extern).


/*#include<stdio.h>
extern int a;
void main()
{
	printf("\n%d", a);
	show();
}
void show()
{
	a = 15;
	printf("%d", a);
}*/


//static storage class (static).

#include<stdio.h>
void main()
{
	great();
	great();
	great();
	great();
}
void great()
{
	int a=4, b=15;
	static int c=1;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	a++;
	b++;
	c++;
}


//Register storage class.


/*#include<stdio.h>
void main()
{
	
}*/
