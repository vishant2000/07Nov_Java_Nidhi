#include<stdio.h>

void main()
{
	char a,b;
	
	printf("\n h='hotdrink'\n c='colddrink' \n d='dinner' ");
	
	printf("\n Enter choice from c & h = ");
	scanf("%c%c",&a,&b);
	
	
	if((a == 'c' || a == 'h') && b == 'd')
	{
		printf("\n Your choice is %c ",a);
		printf("\n Dinner is compulsory");
	}
	else
	{
		printf("Enter a valid choice");
	}	
}
