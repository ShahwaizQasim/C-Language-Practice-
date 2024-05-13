#include <stdio.h>
int main()
{
    int number, i;
    printf("Enter Your Table ");
    scanf("%d", &number);

    printf("Table of %d \n", number);
    for ( i = 1; i <= 10 ; i++)
    {
        printf("%d X %d = %d \n",number,i, number * i);
    }
    return 0;
    
}