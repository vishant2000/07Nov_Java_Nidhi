/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) */

#include<stdio.h>
void main()
{
    int no1,no2;
    int choice;
    float ans;
    printf("Enter the value of two numbers : ");
    scanf("%d%d",&no1,&no2);
    printf("\n 1=addition \n 2=substraction \n 3=division \n 4=multiplication \n 5=modulo");
    printf("\nEnter the choice to perform the operation : ");
    scanf("%d",&choice);
    
    switch(choice)
 {
    case 1:
          ans=no1+no2;
          printf("Addition of two numbers is = %f",ans);
          break;
          
    case 2:
          ans=no1-no2;
          printf("Substraction of two numbers is = %f",ans);
          break;
          
    case 3:
          ans=no1/no2;
          printf("Division of two numbers is = %f",ans);
          break;
          
    case 4:
          ans=no1*no2;
          printf("Multiplication of two numbers is = %f",ans);
          break;
          
    case 5:
          ans=no1%no2;
          printf("Modulo of two numbers is = %f",ans);
          break;
          
    default:
          printf("Enter valid choice");
          break;
 }
 
}
