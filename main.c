#include <stdio.h>

int main()
{
    ineligible:
        printf("You are not eligilible to vote!\n");

    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    if(age<18)
        goto ineligible;
    else
        printf("You are eligible to vote!");
    return 0;
}
