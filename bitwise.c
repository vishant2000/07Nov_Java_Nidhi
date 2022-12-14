#include <stdio.h>

void main()
{
int a,b;
int ans;
int ans1;
int ans2;
int ans3;
int ans4;
int ans5;

printf("enter a and b = ");
scanf("%d%d",&a,&b);

ans = a&b;
printf("\nbitwise and of a and b is = %d",ans);
ans1 = a|b;
printf("\nbitwise or of a and b is = %d",ans1);
ans2 = a^b;
printf("\nbitwise xor of a and b is = %d",ans2);
ans3 = ~a;
printf("\ncomplement of a  is = %d",ans3);
ans4 = 1<<a;
printf("\nshift left of a is = %d",ans4);
ans5 = 1>>a;
printf("\nshift right of a is = %d",ans5);
}
