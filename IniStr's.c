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
    printf("name is %s\n",s1.name);
    printf("Roll no is %d\n",s1.roll);
    printf("name is %f\n",s1.cgpa);
    
    // struct student ece[100];
    // ece[0].roll = 1664;
    // ece[0].cgpa = 9.2;
    // strcpy(ece[0].name,"Priyanshu Garg");
    // printf("name is %s\n",ece[0].name);
    return 0;
}