#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    printf("You have entered %d as your age\n" , age);
    if (age>=18){
        printf("YOU can vote!");
    }
    else {
        printf("You cannot vote!");
    }

return 0;
}