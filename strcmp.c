// strcmp(str) is prebuilt function which
//came under #include<string.h> is used to
//compare the valves of first string to
//anothe and give outpt as 0 or 1.
//if fststr > secstr ->='+'ve'.
//if fststr < secstr ->='-'ve'.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100]="Apple";
    char class[]="Banana";
    
    // printf("%d",strcmp(name,class));
    printf("%d",strcmp(class ,name));
    return 0;
}