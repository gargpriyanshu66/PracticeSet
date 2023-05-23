//using of for loop
#include<stdio.h>
//i is Iterator or counter variable.
int main() {
    for(int i=1;i<=5;i=i+1){   //type 1.
        printf("Hello World\n");
    }
    for(int i=1;i<=100;i=i+1){ //type 2.
        printf("%d\n",i);
    }
    for(int i=10;i>=1;i=i-1){  //type 3.
        printf("%d\n",i);
    }
    return 0;
}