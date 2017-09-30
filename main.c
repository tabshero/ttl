#include <stdio.h>

int factorial(int num)
{
    if(num<0)
        return -1;
    if(num==0)
        return 1;
    return (num * factorial(num-1));
}
int main()
{
    printf("factorial of 5 is = %d", factorial(5));
    return 0;
}
