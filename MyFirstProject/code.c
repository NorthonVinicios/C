#include <stdio.h>
#include <stdlib.h>

int notmain(){
    int num1 = 5, num2 = 0;
    float num3 = 0.3, num4;
    char num5 = "a", num6;

    printf("a new integer number %d", num1);

    printf("\n");

    printf("write a integer number:");

    scanf("%d", &num2);

    printf("\n this is the number you wrote: %d", num2);

    printf("\n this is the variables you have wrote: %d and %d", num1, num2);

    printf("\n");

    printf("sum num1 + num2: %d", num1 + num2);

      printf("\n");

    printf("mod of num1 % num2: %d", num1%num2);

      printf("\n");

    printf("division of num1 / num2: %d", num1/num2);

      printf("\n");

    printf("subtraction of num1 - num2: %d", num1 - num2);

      printf("\n");

    printf("multiply of num1 * num2: %d: ", num1*num2);

      printf("\n");


    printf("\n");







    system('pause');
    return 0;
};
