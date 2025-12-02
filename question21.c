#include <stdio.h>

int main() 
{
    int var = 42;
    int *ptr = &var;
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value via pointer: %d\n", *ptr);
    return 0;
}
