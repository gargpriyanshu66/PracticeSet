#include<stdio.h>
//Loop Counter can be float or even characters
int main() {
    for(float i=1.0;i<=9.0;i++){
        printf("%f\n",i);
    }
    
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }

    int i=9;
    while(i>=0){
        printf("%d\n",i);
        i--;
    }
    return 0;
}