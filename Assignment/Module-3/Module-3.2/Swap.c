//WAP to swap two numbers without using third variable
#include<stdio.h>
void main()
{
    int a;
    int b;
    
    printf("Enter the value of a = ");
    scanf("%d",&a);
    
    printf("Enter the value of b = ");
    scanf("%d",&b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("\nNew value of a is %d",a);
    printf("\nNew value of b is %d",b);
}
