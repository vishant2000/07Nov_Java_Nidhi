// WAP to show Vowel or Consonant using switch case

#include<stdio.h>
void main()
{
  char Alphabet;
  
  printf("Enter alphabet in lowercase only");
  printf("\nEnter the choice of Alphabet : ");
  scanf("%c",&Alphabet);
  
  switch(Alphabet)
  
  {
    case 'a' :
        printf("Entered Alphabet is Vowel");
        break;
        
    case 'e' :
        printf("Entered Alphabet is Vowel");
        break;
        
    case 'i' :
        printf("Entered Alphabet is Vowel");
        break;
        
    case 'o' :
        printf("Entered Alphabet is Vowel");
        break;
        
    case 'u' :
        printf("Entered Alphabet is Vowel");
        break;
        
    default :
        printf("Entered Alphabet is Consonant");
        break;
        
  }
}
