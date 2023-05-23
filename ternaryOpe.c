#include<stdio.h>

main(){
    int age;
    printf("Enter Age :");
    scanf("%d",& age);

    age >= 18 && age <= 70? printf("Adult") : printf("not Adult");
    return 0;
}