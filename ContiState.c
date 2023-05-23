//Print no from 1 to 5 and skip 3.
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;

}