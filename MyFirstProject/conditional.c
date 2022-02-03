#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("beggin the program \n");

    printf("write a number between 0 and 9: ");

    int num1;

    scanf("%d", &num1);

    if(num1 >= 0 && num1 <= 9){
        printf("\n you do well");
    }
    return 0;

    system("pause")
}
