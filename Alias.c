// Alias are as like nick name of variables, and function.

#include <stdio.h>
#include <string.h>
typedef struct student{
    char name[100];
    int roll; 
    float cgpa;
} stu ;


    
int main() {
    stu s1;
    s1.roll = 1602;
    s1.cgpa = 6.2;
    strcpy(s1.name,"Priyanshu");

    printf("student name is %s\n",s1.name);
    return 0;
}