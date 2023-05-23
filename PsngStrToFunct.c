// Structure;
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);
    
int main() {
    struct student s1 = {"Priyanshu Garg",1664,6.8};
    printInfo(s1);

    return 0;
}

//call by value.
void printInfo(struct student s1){
    printf("Student Information : \n");

    printf("Roll no is %s\n",s1.name);
    printf("Roll no is %d\n",s1.roll);
    printf("cgpa is %f\n",s1.cgpa);
}