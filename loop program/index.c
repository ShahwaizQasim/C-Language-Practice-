/* five natural numbers print */

// #include <stdio.h>
// int main()
// {
//     int i;
//     for ( i = 1; i <= 5; i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


/* five * print */

// #include <stdio.h>
// int main()
// {
//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("*");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//    const float PI = 3.141;
//    float radius, area;

//    printf("Enter the radius of the circle ");
//    scanf("%f",&radius);

//    area = PI * radius * radius;

//    printf("The area of the circle with radius %.2f is : %.2f\n",radius,area);

//    return 0; 
// }


#include <stdio.h>
int main()
{
float fahrenheit, celsius;
printf("Enter Temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);

celsius = 5 * (fahrenheit-32)/9;

printf("Temperature in Celsius: %.2f\n", celsius);

return 0;
}




