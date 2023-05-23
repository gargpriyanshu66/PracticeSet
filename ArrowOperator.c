// Structure;
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
    
int main() {
    struct student s1 = {"Priyanshu Garg",1664,6.8};
    printf("Roll no is %d\n",s1.roll);

    struct student *ptr = &s1;
    printf("Roll no %d\n",(*ptr).roll);
    
    printf("Roll no is %s\n",ptr->name);
    printf("Roll no is %d\n",ptr->roll);
    printf("cgpa is %f\n",ptr->cgpa);
    
    // struct student ece[100];
    // ece[0].roll = 1664;
    // ece[0].cgpa = 9.2;
    // strcpy(ece[0].name,"Priyanshu Garg");
    // printf("name is %s\n",ece[0].name);
    return 0;
}