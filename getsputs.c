//Ask the user to enter their first Name & print
//it back to them, Also try to print fulll Name.
#include<stdio.h>

int main(){
    char fullname[50];
    //gets(fullname);
    fgets(fullname,50,stdin);
    puts(fullname);
    
    return 0;
}