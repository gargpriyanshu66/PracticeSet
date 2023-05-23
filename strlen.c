// strlen(str) is prebuilt function which came under #include<string.h> is used for count string lenght excluding '\0'.
#include <stdio.h>
#include <string.h>
int main() {
    char name[]="Priyanshu";
    int length = strlen(name);
    printf("length is %d", length);
    
    return 0;
}