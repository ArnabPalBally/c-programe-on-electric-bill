#include<stdio.h>
int main()
{
	int uc,uc1,uc2;
	float bill,temp,i;
	printf("enter your expected monthly consumption : ");
	scanf("%d",&uc);
	// ABE Pvt Ltd
	{
		uc1=uc;
		uc2=uc;
		if(uc1>200) 
		{
			bill=uc1*7.25;
		}
		else
		{
			if(uc1>160)
			{
				temp=uc1-160;
				bill+=temp*7.5;
				uc1=uc1-temp;
			}
			if (uc1>120)
			{
				temp=uc1-120;
				bill+=temp*7.00;
				uc1=uc1-temp;
			}
			if(uc1>60)
			{
				temp=uc1-60;
				bill+=temp*6.00;
				uc1=uc1-temp;
				
			}
			if(uc1>25)
			{
				temp=uc1-25;
				bill+=temp*5.50;
				uc1=uc1-temp;
			}
			if(uc1<=25)
			{
				temp=uc1;
				bill+=temp*4.5;
				
			}
		}
		bill=bill+50;
		
	}
	//CDE Pvt Ltd
	float bill2,temp2;
	{
		if(uc2>200)
		{
			bill2=uc2*7.2;
			
		}
		else
		{
			if(uc2>150)
			{
				temp2=uc2-150;
				bill2+=temp2*7.5;
				uc2=uc2-temp2;
			}
			if(uc2>100)
			{
				temp2=uc2-100;
				bill2+=temp2*6.5;
				uc2=uc2-temp2;
				
			}
			if(uc2>60)
			{
				temp2=uc2-60;
				bill2+=temp2*6.25;
				uc2=uc2-temp2;
			}
			if(uc2>25)
			{
				temp2=uc2-25;
				bill2+=temp2*6.00;
				uc2=uc2-temp2;
			}
			if(uc2<=25)
			{
				temp2=uc2;
				bill2+=temp2*4.00;
			}
		}
		bill2=bill2+65;
    }
	if((uc>=0)&&(uc<=60))
	{
		printf("Your consumption is :Low");
	}
    if((uc>=61)&&(uc<=200))
	{
		printf("Your consumption is : Medium");
	}
	if(uc>200)
	{
		printf("Your consumption is: Heavy");
	}
	{
       if(bill>bill2)
	   {
		  i=bill-bill2;
		  printf("\nBy choosing CDE Pvt.Ltd. you can save Rs. %.2f per month ",i);
	   }
	   if(bill<bill2)
	   {
	   	    i=bill2-bill;
	   	    printf("\nBy choosing ABE Pvt.Ltd.you can save Rs. %.2f per month",i);
	   }
	   else
	   {
	   	    printf("you can choose any of them");
	   }
    }
    return 0;

}
