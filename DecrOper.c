#include<stdio.h>
// decrement operator.
//--i(pre  decrement operator)
//i--(post decrement operator)
int main() {
    int i = 5;
    printf("%d\n",i--); //i--(post decrement operator) it will print values then store it's decrement.
    printf("%d\n",i); //when we print it will show the decrement that is stored in it.
    
    printf("%d\n",--i); //--i(pre decrement operator) will first decrease the value then print it.
    printf("%d\n",i); //when we print this it will show already decreased value.
    
    return 0;
}