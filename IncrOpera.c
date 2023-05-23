#include<stdio.h>
//increment operator
//++i(pre  increment operator)
//i++(post increment operator)
int main() {
    int i = 1;
    //i++(post increment operator) it will print values then store it's increment.
    printf("%d\n",i++);
    printf("%d\n",i); //when we print it will show the increment that is stored in it.
    
    //++i(pre increment operator) will first increase the value then print it.
    printf("%d\n",++i);
    printf("%d\n",i); //when we print this it will show already increased value.
    return 0;
}