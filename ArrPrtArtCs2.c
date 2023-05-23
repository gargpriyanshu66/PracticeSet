//Pointer Arithematics case 2.
#include<stdio.h>

int main(){
    float age = 98.00;
    float *ptr = &age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u",ptr);
    return 0;
}