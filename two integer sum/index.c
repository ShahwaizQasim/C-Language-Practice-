/* two integer sum */

#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter first value ");
   scanf("%d",&a);

   printf("Enter second value ");
   scanf("%d",&b);
   
   int sum = a + b;
   printf("Your sum is: %d\n", sum);
   return 0;
}