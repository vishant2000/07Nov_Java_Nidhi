//WAP to convert days into years and years into days

#include<stdio.h>
 void main()
{ 
    float years;
    float days;
    char a;
    
      printf("d=convert years into days \ny=convert days into years\n");
      printf("enter the choice from d or y = ");
	    scanf("%c",&a);
	
	if(a=='d')
	{
	    printf("Enter no. of years = ");
	    scanf("%f",&years);
	
	    days=years*365;
	
	    printf(" %f Years = %f days",years,days);
	}
	else if(a=='y')
	{
	    printf("Enter no. of days = ");
	    scanf("%f",&days);
	
	    years=days/365;
	
	    printf(" %f Days = %f Years",days,years);
	}
	else
	{
	    printf("Enter valid input");
	}
}
