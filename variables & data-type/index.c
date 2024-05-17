//vsyntax of C language
// #include <stdio.h>
// main()
// {
// printf("Hello World!");
// }

// simple program
// #include <stdio.h>
// int main()
// {
//     printf("Hello World");
//     return 0;
// }

// \n new line

/* variables & data-types */ 
// #include <stdio.h>
// int main()
// {
//     int age = 22;  // "%d"
//     float pi = 3.142;  // %f
//     char hasgtag = '#';
//     return 0;
// }

/* age print */
// #include <stdio.h>
// int main(){
//     int age = 22;
//     printf("age is: %d \n", age); 
//     return 0;
// }

/* user se age li hai */
// #include <stdio.h>
// int main(){
//     int age;
//     printf("Enter Your Age ");
//     scanf("%d", &age);
//     printf("Your Age is: %d\n", age);
//     return 0;
// }

/* two integer plus program */
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number ");
    scanf("%d" , &a);

    printf("Enter Second Number ");
    scanf("%d", &b);

    int sum = a + b;
    printf(" Sum is %d \n", sum);

    return 0;
}