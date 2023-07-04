#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Start int main(){
#define End return 0;}

void input();
void show();
void calculation();

int roll,ntt,ntp,m3t,m3p,cecdt,cecdp,dsdt,dsdp,sst,ssp,mit,mip,cat,cap,ews_1p,nttotal,m3total,cecdtotal,dsdtotal,sstotal,mitotal,catotal,ews_1total,total;
char grade,ntgrade,m3grade,cecdgrade,dsdgrade,ssgrade,migrade,cagrade,ews_1grade,nti,m3i,cecdi,dsdi,ssi,mii,cai,ews_1i;
long en;
float per;
char name[30],place[20],mothern[20],clg[20],medium[30],date[20],branch[20],statement[40],res[7];
char s[] = "Pass";
char s1[] = "Fail";

Start
 input();
 calculation();
 show();
End

void input()
{
    printf("\nEnter your name          : ");
    gets(name);
    printf("\nEnter your mother name   : ");
    gets(mothern);
    printf("\nEnter your place         : ");
    gets(place);
    printf("\nEnter your medium        : ");
    gets(medium);
    printf("\nEnter Branch name        : ");
    gets(branch);
    printf("\nEnter date dd/mm/yyyy    : ");
    gets(date);
    printf("\nEnter College name       : ");
    gets(clg);
    printf("\nEnter your Roll no       : ");
    scanf("%d",&roll);
    printf("\nEnter your Enrollment no : ");
    scanf("%ld",&en);
    
    
    
    subntt:
    printf("\nEnter  NT theory marks       : ");
    scanf("%d",&ntt);
    if(ntt>80 || ntt<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subntt;
    }
	subntp:
    printf("\nEnter  NT practical marks     : ");
    scanf("%d",&ntp);
    if(ntp>20||ntp<0)
    {
        printf("\nplzz enter valid below and equal to 20.........\n");
        goto subntp;
    }
    
	
	
	subm3t:
    printf("\nEnter AM III theory marks     : ");
    scanf("%d",&m3t);
    if(m3t>80||m3t<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subm3t;
    }
    subm3p:
    printf("\nEnter AM III practiacl marks  : ");
    scanf("%d",&m3p);
    if(m3p>20||m3p<0)
    {
        printf("\nplzz enter valid below and equal to 20.........\n");
        goto subm3p;
    }
    
	
	
	subcecdt:
    printf("\nEnter CECD theory marks       : ");
    scanf("%d",&cecdt);
    if(cecdt>80||cecdt<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subcecdt;
    }
    subcecdp:
    printf("\nEnter CECD practical marks    : ");
    scanf("%d",&cecdp);
    if(cecdp>20||cecdp<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto subcecdp;
    }
    
	
	
	subdsdt:
    printf("\nEnter DSD theory marks        : ");
    scanf("%d",&dsdt);
    if(dsdt>80||dsdt<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subdsdt;
    }
    subdsdp:
    printf("\nEnter DSD practical marks     : ");
    scanf("%d",&dsdp);
    if(dsdp>20||dsdp<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto subdsdp;
    }
    
	
	
	
	subsst:
    printf("\nEnter S&S theory marks        : ");
    scanf("%d",&sst);
    if(sst>80||sst<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subsst;
    }
	subssp:
    printf("\nEnter S&S practical marks     : ");
    scanf("%d",&ssp);
    if(ssp>20||ssp<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto subssp;
    }
    
	
	
	
	submit:
    printf("\nEnter MI theory marks         : ");
    scanf("%d",&mit);
    if(mit>80||mit<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto submit;
    }
    submip:
    printf("\nEnter MI practical marks      : ");
    scanf("%d",&mip);
    if(mip>20||mip<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto submip;
    }
    
	
	
	subcat:
    printf("\nEnter CA theory marks         : ");
    scanf("%d",&cat);
    if(cat>80||cat<0)
    {
        printf("\nplzz enter valid marks below and equal to 80.........\n");
        goto subcat;
    }
    subcap:
    printf("\nEnter CA practical marks      : ");
    scanf("%d",&cap);
    if(cap>20||cap<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto subcap;
    }
   
   
   
    subews_1p:
    printf("\nEnter EWS_1 practical marks   : ");
    scanf("%d",&ews_1p);
    if(ews_1p>20||ews_1p<0)
    {
        printf("\nplzz enter valid marks below and equal to 20.........\n");
        goto subews_1p;
    }
}

void calculation()
{
  nttotal=ntt+ntp;
  m3total=m3t+m3p;
  cecdtotal=cecdt+cecdp;
  mitotal=mit+mip;
  dsdtotal=dsdt+dsdp;
  sstotal=sst+ssp;
  catotal=cat+cap;
  ews_1total=ews_1p;
  total = nttotal+m3total+cecdtotal+mitotal+dsdtotal+sstotal+catotal+ews_1total;
  per = (total*100/720);
  if(per>= 90&&per<=100)
  grade = 'A';
  else if(per>= 80&&per<=89)
  grade = 'B';
  else if(per>= 70&&per<=79)
  grade = 'C';
  else if(per>= 60&&per<=69)
  grade = 'D';
  else if(per>= 40&&per<=59)
  grade = 'E';
  else
  grade = 'F';
  
  if(nttotal>=90&&nttotal<=100)
  ntgrade='A';
  else if(nttotal>=80&&nttotal<=89)
  ntgrade='B';
  else if(nttotal>=70&&nttotal<=79)
  ntgrade='C';
  else if(nttotal>=60&&nttotal<=69)
  ntgrade='D';
  else if(nttotal>=50&&nttotal<=59)
  ntgrade='E';
  else
  ntgrade='F';
  
  if(m3total>=90&&m3total<=100)
  m3grade='A';
  else if(m3total>=80&&m3total<=89)
  m3grade='B';
  else if(m3total>=70&&m3total<=79)
  m3grade='C';
  else if(m3total>=60&&m3total<=69)
  m3grade='D';
  else if(m3total>=50&&m3total<=59)
  m3grade='E';
  else
  m3grade='F';
  
  if(cecdtotal>=90&&cecdtotal<=100)
  cecdgrade='A';
  else if(cecdtotal>=80&&cecdtotal<=89)
  cecdgrade='B';
  else if(cecdtotal>=70&&cecdtotal<=79)
  cecdgrade='C';
  else if(cecdtotal>=60&&cecdtotal<=69)
  cecdgrade='D';
  else if(cecdtotal>=50&&cecdtotal<=59)
  cecdgrade='E';
  else
  cecdgrade='F';
  
  if(mitotal>=90&&mitotal<=100)
  migrade='A';
  else if(mitotal>=80&&mitotal<=89)
  migrade='B';
  else if(mitotal>=70&&mitotal<=79)
  migrade='C';
  else if(mitotal>=60&&mitotal<=69)
  migrade='D';
  else if(mitotal>=50&&mitotal<=59)
  migrade='E';
  else
  migrade='F';
  
  if(dsdtotal>=90&&dsdtotal<=100)
  dsdgrade='A';
  else if(dsdtotal>=80&&dsdtotal<=89)
  dsdgrade='B';
  else if(dsdtotal>=70&&dsdtotal<=79)
  dsdgrade='C';
  else if(dsdtotal>=60&&dsdtotal<=69)
  dsdgrade='D';
  else if(dsdtotal>=50&&dsdtotal<=59)
  dsdgrade='E';
  else
  dsdgrade='F';
  
  if(sstotal>=90&&sstotal<=100)
  ssgrade='A';
  else if(sstotal>=80&&sstotal<=89)
  ssgrade='B';
  else if(sstotal>=70&&sstotal<=79)
  ssgrade='C';
  else if(sstotal>=60&&sstotal<=69)
  ssgrade='D';
  else if(sstotal>=50&&sstotal<=59)
  ssgrade='E';
  else
  ssgrade='F';
  
  if(catotal>=90&&catotal<=100)
  cagrade='A';
  else if(catotal>=80&&catotal<=89)
  cagrade='B';
  else if(catotal>=70&&catotal<=79)
  cagrade='C';
  else if(catotal>=60&&catotal<=69)
  cagrade='D';
  else if(catotal>=50&&catotal<=59)
  cagrade='E';
  else
  cagrade='F';
  
  if(ews_1total>=15&&ews_1total<=20)
  ews_1grade='A';
  else if(ews_1total>=10&&ews_1total<=14)
  ews_1grade='B';
  else if(ews_1total>=7&&ews_1total<=9)
  ews_1grade='C';
  else
  ews_1grade='D';
  
  if(per>45)
     strcpy(res,s);
   else
     strcpy(res,s1);
  
  if(nttotal<40)
  nti ='#';
  else
  nti = ' ';

  if(m3total<40)
  m3i ='#';
  else
  m3i = ' ';

  if(cecdtotal<40)
  cecdi ='#';
  else
  cecdi = ' ';

  if(mitotal<40)
  mii ='#';
  else
  mii = ' ';

  if(dsdtotal<40)
  dsdi ='#';
  else
  dsdi = ' ';

  if(sstotal<40)
  ssi ='#';
  else
  ssi = ' ';

  if(catotal<40)
  cai ='#';
  else
  cai = ' ';

  if(ews_1total<7)
  ews_1i ='#';
  else
  ews_1i = ' ';
}

void show()
{
    printf("\n");
    int x=0,y=0,z=0,w=0,v=0,u=0,k=0,j=0;
    while(x<113)
    {
        printf("*");
        x++;
    }
    printf("\n|\t\t                             Faculty of Science and Tehnology                        \t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t    THIRD SEMESTER EXAMINATION FOR DEGREE OF BACHELOR OF ENGINEERING, WINTER (2021)    \t\t|");
    printf("\n|\t\t               [FOUR YEAR DEGREE COURSE]  [CREDIT BASED SYSTEM]                            \t|\n");
    while(y<113)
    {
        printf("-");
        y++;
    }
    printf("\n|  Name : %s  \t\t\t\t| Roll no : %03d\t\t\t| Date : %s \t|",name,roll,date);
    printf("\n|  Mother's name : %s\t\t             | Enrol no : %010ld\t\t\t\t        |",mothern,en);
    printf("\n|  Branch name : %s\t\t\t\t\t\t\t\t\t\t\t\t|",branch);
    printf("\n|  College name : %s\t\t\t\t\t\t\t\t\t\t\t\t|\n",clg);
    while(z<113)
    {
        printf("-");
        z++;
    }
    printf("\n| Sr. |\t\t\t\t\t|    MARKS & CREDITS SCHEME    |         MARKS & GRADES AWARDED         |");
    printf("\n| No. |\t\t  SUBJECT \t \t|    MAX    |   MAX   |   MIN  |  TU/PU |  TI/PI  |   TOTAL   |  GRADE  | ");
    printf("\n|     |\t\t\t\t\t|TU/PU|TI/PI|  MARKS  |  MARKS |        |         |   MARKS   |         |\n");
    while(w<113)
    {
        printf("-");
        w++;
    }
    printf("\n| 01. | NT\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",ntt,ntp,nttotal,nti,ntgrade);
    printf("\n| 02. | AM III\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",m3t,m3p,m3total,m3i,m3grade);
    printf("\n| 03. | CECD\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",cecdt,cecdp,cecdtotal,cecdi,cecdgrade);
    printf("\n| 04. | S&S\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",sst,ssp,sstotal,ssi,ssgrade); 
    printf("\n| 05. | DSD\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",dsdt,dsdp,dsdtotal,dsdi,dsdgrade);
    printf("\n| 06. | MI\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",mit,mip,mitotal,mii,migrade);
    printf("\n| 07. | CA\t\t\t\t|  80 |  20 |   100   |   40   |   %02d   |    %02d   |    %03d %c  |    %c    |",cat,cap,catotal,cai,cagrade);
    printf("\n| 08. | EWS_1\t\t\t\t|  -- |  20 |   020   |   12   |   --   |    %d   |    %03d %c  |    %c    |\n",ews_1p,ews_1total,ews_1i,ews_1grade);
    while(v<113)
    {
        printf("-");
        v++;
    }
    printf("\n");
    while(u<113)
    {
        printf("-");
        u++;
    }
    printf("\n|      OUT OF      |     TOTAL MARKS    |\tPERCENTAGE\t|      RESULT     |     GRADE\t|     REMARK    |");
    printf("\n|      MARKS       |       OBTAINED     |\t          \t|                 |\t\t|\t \t|\n");
    while(k<113)
    {
        printf("-");
        k++;
    }
    printf("\n|       720        |          %d       |        %.2f          |      %s       |      %c      |     ----      |\n",total,per,res,grade);
    while(j<113)
    {
        printf("*");
        j++;
    }
     printf("\n\n");
    if(per>=45)
        printf(" \t\t\t\t  * * * Congratulation you are Passed * * *");
    else
    {
        printf("\t\t\t\t\t Better luck next time.......");
    }
    printf("\n\n\n");
    printf("\n\t\t\t* * * * * * * * *  MADE  BY  *MAHESH*  :)  * * * * * * * * *\n");
    printf("\n\n\n");
}

