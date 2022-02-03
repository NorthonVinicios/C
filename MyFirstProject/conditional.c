#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("beggin the program \n");
    int still = 1;
    while(still == 1){

    printf("write a number between 0 and 9: ");

    int num1;

    scanf("%d", &num1);

    if(num1 >= 0 && num1 <= 9){
        printf("\n you do well");
    }else{
        printf("\n are you stupid");
    }

    printf("\n verify if is odd or even: ");

    if(num1 % 2 == 1){
        printf("%d is odd", num1);
    }else{
        printf("%d is even", num1);
    }

    printf("\n verify if is a prime: ");

    int i = 0 , count = 0;

    for(i = 2; i <= num1 / 2; i++){
        if(num1 % i == 0){
            count++;
            break;
        }
    }

    if(count > 2){
        printf("is not prime");
    }else{
        printf("is prime");
    }


    printf("\n do you wish to continue? if yes write 1, if no write 0: ");
    scanf("%d", &still);

    }
     return 0;
    system("pause");
}

