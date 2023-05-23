#include<stdio.h>

int main() {
    int number  ;
    printf("Enter a number :");
    scanf("%d",&number);
    
    if (number >= 0) {
        printf("positive,\n");
        if (number % 2 ==0){
            printf("Even Number");
        }
        else {
            printf("Odd Number");
        }

    }
    else {
        printf("negative,\n");
        if(number % 2 ==0){
            printf("Even Number");
        }
        else {
            printf("Odd Number");
        }
    }
    
    return 0;
}