#include<stdio.h>
void doc_lodin();
void disease();
union doctor{
	char name[20], email[30], specialization[40], password[10], count;
	int mobile;
	
};
int main()
{
	/*int i, j, lw=0, up=0, sp=0, num=0, count;
	union doctor d[count];
	printf("\nEnter number of doctor to be registered: ");
	scanf("%d", &count);
	for(i=0; i<count; i++)
	{
		printf("\nEnter Doctor name: ");
		scanf("%s", &d[i].name);
		printf("\nEnter mobile number: ");
		scanf("%d", &d[i].mobile);
		printf("\nEnter email: ");
		scanf("%s", &d[i].email);
		printf("\nEnter Specialization: ");
		scanf("%s", &d[i].specialization);
		pass:
		printf("\nEnter Password: ");
		scanf("%s", &d[i].password);
		for(j=0; j<10; j++)
		{
			if((int)d[i].password[j]>=97 && (int)d[i].password[j]<=122)
			{
				lw++;
			}
			else if((int)d[i].password[j]>=65 && (int)d[i].password[j]<=90)
			{
				up++;
			}
			else if((int)d[i].password[j]>=48 && (int)d[i].password[j]<=57)
			{
				num++;
			}
			else{
				sp++;
			}
		}
		if(up>0 && lw>0 && sp>0 && num>0)
		{
			printf("\n Your registration is completed.");
		}
		else
		{
			printf("\nInvalid Password.");
			goto pass;
		}
		
		if(count>1)
		{
			printf("\nNow enter details of another Doctor.");
		}
	}*/
	
	disease();
	
	
	return 0;
}

void disease()
{
	char dis[40];
	int day;
	printf("\nEnter your disease or symptoms you are suffering from: ");
	gets(dis);
	printf("\nEnter how many days you are suffering: ");
	scanf("%d", &day);
	printf("\n%s", dis);
	
}

void doc_login()
{
	
}
