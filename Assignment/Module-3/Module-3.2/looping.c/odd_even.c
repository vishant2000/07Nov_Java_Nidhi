#include <stdio.h>
void main() 
{

    int arr[10];
    int i,even=0,odd=0;
    int sumofeven=0,sumofodd=0;

 
    printf("\n Enter 10 numbers: \n\n");

         for(i=0; i<10; i++)
           {
            printf("Enter no. %d : ",i+1);
            scanf("%d",&arr[i]);
             if(arr[i]%2==0)
             {
                
             even++;
             sumofeven += arr[i];
             }
             else
             {
             odd++;
             sumofodd += arr[i];
             }      
           }
        
    printf("You entered %d even numbers",even);
    printf("\nYou entered %d odd numbers",odd);
    printf("\nSum of even numbers: %d",sumofeven);
    printf("\nSum of odd numbers: %d",sumofodd);
}
