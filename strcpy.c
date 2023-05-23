// strcpy(str) is prebuilt function which came under #include<string.h> is used to replace previous value to new value.
#include <stdio.h>
#include <string.h>
int main() {
    char name[]="Priyanshu";
    char class[]="Graduate";
    
    strcpy(name, class);
    puts(name);
    
    return 0;
}