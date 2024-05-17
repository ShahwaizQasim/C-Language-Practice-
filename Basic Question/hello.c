/* Q1) Write a program to calculate area of a square ? */
//(Given Side jo hum user se lengy)
// calculate area  = side * side  // formula

// Area of Square
// #include <stdio.h>
// int main()
// {
//    int side;
//    printf("Enter Side ");   // side given hogi side user bataega
//    scanf("%d", &side);
   
//    int area = side * side; 
//    printf("Area of Square  %d", area);
//    return 0;
// }


/* Q2) Write a program to calculate area of a circle ? */
//(Given Radius jo hum user se lengy)
// area of circle = 3.142 * radius * radius //formula

#include <stdio.h>
int main()
{
   float radius;
   printf("Enter Radius ");
   scanf("%f", &radius);

   float areaCalculate = 3.142 * radius * radius;
   printf("Area of Circle %.2f", areaCalculate);
   return 0;
}