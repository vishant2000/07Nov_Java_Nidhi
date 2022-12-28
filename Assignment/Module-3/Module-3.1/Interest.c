//WAP to find simple interest
#include<stdio.h>
 void main()
{
	float I;
	int P;
	int N;
	float R;
	
	printf("Enter the value of principle amount : ");
  scanf("%d", &P);

  printf("Enter the time period in year: ");
  scanf("\n %d", &N);

  printf("Enter rate of interst: ");
  scanf("\n %f", &R);
   
  I = (P * N * R) / 100;
 
  printf("\n Simple Interest = %f", I);
}
