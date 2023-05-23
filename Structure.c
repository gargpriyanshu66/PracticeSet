// Structure;
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
    
int main() {
    struct student s1;
    s1.roll = 21;
    strcpy(s1.name,"Priyanshu");
    s1.cgpa = 6.80;

    printf("Student name is %s\t", s1.name);
    printf("Student roll is %d\t", s1.roll);
    printf("Student cgpa is %f\t", s1.cgpa);
    return 0;
}