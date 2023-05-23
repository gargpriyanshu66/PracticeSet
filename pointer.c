#include<stdio.h>
int main()
{
    int age = 54;
    int *ptr = &age;
    int _age = *ptr;

//value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
//Address
    printf("%u",&age);
    printf("\n%p",ptr);
    printf("\n%p",&ptr);
    return 0;
}
