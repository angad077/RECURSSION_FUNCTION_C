// RECURSSION FUNCTION C PROGRAME
#include <stdio.h>
int factorial(int n);
int main()
{
    int a = 5;

    printf("The value of %d factorial is %d", a, factorial(a));
    return 0;
}
int factorial(int n)
{
    
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}