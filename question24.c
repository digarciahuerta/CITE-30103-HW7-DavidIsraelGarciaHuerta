#include <stdio.h>

int square(int x) 
{
    return x * x;
}

int main() 
{
    int (*funcPtr)(int) = square;
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Square of %d = %d\n", num, funcPtr(num));
    return 0;
}
