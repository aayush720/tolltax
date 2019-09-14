#include<stdio.h>
#include<conio.h>
int Menu();
void Bus();
void Car();
void Bigvehicle();
void Vip();
void Delete();
void ShowDetails();
int nob=0,noc=0,nobv=0,nov=0,amount=0,count=0;
void main()
{
	while(1)
	{
	
		switch(Menu())
		{
			case 1:
				Bus(); break;
			case 2:
				Car();break;
			case 3:
				Bigvehicle(); break;
			case 4:
				Vip();break;
			case 5:
				ShowDetails(); break;
			case 6:
					Delete();break;
			
			
			default:
				printf("\n invalid number");
			
		}
    }
    
}
    int Menu()
    {
    	int ch;
    	printf("\n\n 1 enter bus ");
    	printf("	 2 enter car");
    	printf(" 	 3 enter bigvehicle");
    	printf("	 4 enter vip");
    	printf("\n5 show status");
    	printf("	 6 delete ");
    	printf("	 7 exit ");
    	printf("\n \n enter your choice \n");
    	scanf("%d",&ch);
    	return(ch);
    }
    void Bus()
    {    	nob++;
		amount+=100;
		  count++;
	printf("enter successfully"); }
	void Car()
    {
    	noc++;
    	amount+=50;
    	count++;
    	printf("enter successfully");
	}
    	void Bigvehicle()
    {
    	nobv++;
    	amount+=150;
    	count++;
    	printf("enter successfully");
	}
	void Vip()
    {
    	nov++;
    	amount+=0;
    	count++;
    	printf("enter successfully");
	}

	void ShowDetails()
    {  printf("\n no of bus is %d ",nob);
    printf("\n no of car is  %d",noc);
    printf("\n no of  big vehicle  is %d",nobv);
    printf("\n no of vip is  %d",nov);
    printf("\n total amount is %d ",amount);
    printf("\n total vehicle %d ",count);
	}
	void Delete()
	{
		nob=0,noc=0,nobv=0,nov=0,amount=0,count=0;
		printf("delete successfully");
	}    	

