// WAP to show monday to sunday using switch case 

#include<stdio.h>
void main()
{
    int Day;
    
    printf("Enter the choice : ");
    scanf("%d",&Day);
    
    switch(Day)
    {
        case 1:
           printf("Monday");
           break;
           
        case 2:
           printf("Tuesday");
           break;
           
        case 3:
           printf("Wednesday");
           break;
           
        case 4:
           printf("Thursday");
           break;
           
        case 5:
           printf("Friday");
           break;
           
        case 6:
           printf("Saturday");
           break;
           
        case 7:
           printf("Sunday");
           break;
           
        default:
           printf("Enter valid choice");
           break;
        
    }
    
}
