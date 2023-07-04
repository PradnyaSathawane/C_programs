#include<stdio.h>
void example();
void quit();
void main()
{
	
	int a, b, c, d, e, f, p, q, r, t, i, j, k, u, v;
	printf("|                Welcome to KBC.                    \n");
	Que_1:
	printf("\n1. In game of ludo  the discs or tokens are of how many colours?\n");
	printf("\n 1) One           2) Two");
	printf("\n 3) Three         4) Four");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &a);
	if(a==4)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 1000/-.");
    }
	else if(a==5)
	{
		quit();
	}
	else
	{
		printf("\nyour answer is incorrect.");
		goto Qu
	}
	Que_2:
	printf("\n\n2. Who is the author of the epic 'Meghdoot' ?\n");
	printf("\n 1) Vishakadatta           2) Valmiki");
	printf("\n 3) Banabhatta             4) kalidas");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &b);
	if(b==4)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 2000/-.");
		printf("\n Now your total price is 3000/-.");
	
	}
	else if(b==5)
	{
		quit();
	}
	
	else
	{
		printf("\nyour answer is incorrect.");
		goto Que_2;
	}
	Que_3:
	printf("\n\n3. Material through which light cannot pass are said to be ?\n");
	printf("\n 1) Transparent           2) Opaque");
	printf("\n 3) Translucent           4) Obstructor");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &c);
	if(c==2)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 3000/-.");
		printf("\n Now your total price is 6000/-.");
		if(c==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
		
	}
	
	
	printf("\n\n4. The Indian football team made its first apperance at Olympics in ?\n");
	printf("\n 1) 1936           2) 1952");
	printf("\n 3) 1948           4) 1956");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &d);
	if(d==3)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 5000/-.");
		printf("\n Now your total price is 11,000/-.");
		if(d==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n5. Blue is what number on the resistor color code ?\n");
	printf("\n 1) 1           2) 4");
	printf("\n 3) 2           4) 6");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &e);
	if(e==4)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 10,000/-.");
		printf("\n Now your total price is 21,000/-.");
		if(e==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\6. Where was the BRICS summit held in 2014 ?\n");
	printf("\n 1) Brazil           2) India");
	printf("\n 3) Russia           4) China");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &f);
	if(f==1)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 20,000/-.");
		printf("\n Now your total price is 41,000/-.");
		if(f==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n7. Which of these brand names also means one-billionth part of something?\n");
	printf("\n 1) Sumo           2) Vista");
	printf("\n 3) Bolt           4) Nano");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &p);
	if(p==4)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 40,000/-.");
		printf("\n Now your total price is 81,000/-.");
		if(p==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n8. Fields medal is a prestigious international honour given in which subject ?\n");
	printf("\n 1) Life science           2) Mathematics");
	printf("\n 3) History           	 4) Astronomy");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &q);
	if(q==2)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 80,000/-.");
		printf("\n Now your total price is 1,61,000/-.");
		if(q==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n9. Which astronomer was the first to observe the rings around saturn ?\n");
	printf("\n 1) Galileo Galilei           		 2) Johannes Kepner");
	printf("\n 3) Nicholas Copernicus           	 4) Edwin Hubble");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &r);
	if(r==1)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 1,60,000/-.");
		printf("\n Now your total price is 3,21,000/-.");
		if(r==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	printf("\n\n10. Srinagar city is situated on the banks of which river ?\n");
	printf("\n 1) Sutlej           		 2) Tapi");
	printf("\n 3) Jhelum           	     4) Tawi");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &t);
	if(t==3)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 3,20,000/-.");
		printf("\n Now your total price is 6,41,000/-.");
		if(t==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n11. Which of these awards is not named after a person ?\n");
	printf("\n 1) Nobel prize           	 2) Pultizer price");
	printf("\n 3) Magsaysay price            4) Grammy awards");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &i);
	if(i==4)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 6,40,000/-.");
		printf("\n Now your total price is 12,51,000/-.");
		if(i==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n12. Who is the father of cloud computing?\n");
	printf("\n 1) Sharon B. Codd          	 2) Edgar Frank Codd");
	printf("\n 3) J.C.R. Licklider            4) Charles Bachman");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &j);
	if(j==3)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 12,50,000/-.");
		printf("\n Now your total price is 25,00,000/-.");
		if(j==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	printf("\n\n13. Which of these units of currency is also the name of a unit of weight ?\n");
	printf("\n 1) Dollar           	 2) Pound");
	printf("\n 3) Europe             4) Rupee");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &k);
	if(k==2)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 25,00,000/-.");
		printf("\n Now your total price is 50,00,000/-.");
		if(k==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	
	printf("\n\n14. In which yesr, the first passenger train was introduced in India?\n");
	printf("\n 1) 1857           	 2) 1853");
	printf("\n 3) 1866             4) 1847");
	printf("\n 5) Quit.\n");
	printf("\n ans please: ");
	scanf("%d", &u);
	if(u==2)
	{
		printf("\nYour answer is correct.");
		printf("\n you win the price of 50,00,000/-.");
		printf("\n Now your total price is 1,00,00,000/-.");
		if(u==5)
		{
			quit();
		}
		else
		{
			example();
		}
	}
	else
	{
		printf("\nyour answer is incorrect.");
	}
	
	
	
	
}
void example()
	{
		
	}
	void quit()
	{
		printf("\n Thankyou for playing.");
	}	
