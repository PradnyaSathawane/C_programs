#include<stdio.h>
int main()
{
	int i, num[5], ans, rem;
	for(i=1; i<6; i++)
	{
		scanf("%d", &num[i]);
		
	}
	for(i=1; i<6; i/=10)
	{
		rem=num[i]%10; 
		ans=ans+rem; 
	}
	printf("%d", ans);

return 0;
	
}
