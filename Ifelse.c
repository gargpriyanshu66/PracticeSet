#include<stdio.h>

int main() {
    int age;
    printf("Enter age :");
    scanf("%d",& age);

    if (age<18) {
        printf("You are not an Adult\n");
        printf("You can't able to vote");
    }

    else if (age>=18){
        printf("You are an Adult\n");
        printf("Now You can able to vote");
    }

    else {
        printf("I cant understand\n");
    }
    return 0;
}