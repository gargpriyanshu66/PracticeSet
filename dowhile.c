//Ques. Print a number from 1 to 5 using do while loop.
#include<stdio.h>
int main() {
    int i=1;
    do {
        printf("%d\n",i);
        i++;
    } while(i<=5);

    int i=5;
    do {
        printf("%d\n",i);
        i--;
    } while(i>=1);
    return 0;
}