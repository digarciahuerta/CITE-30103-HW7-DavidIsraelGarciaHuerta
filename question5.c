#include <stdio.h>
long factorial(int n)
{
	if(n==0) 
	{
		return 1;
	}
	else
	{
	return n * factorial(n-1);
	}	
}
int main()
{
	int n;
	printf("enter a number");
	    scanf("%d", &n);
	if (n < 0) 
	{
        printf("Error: n must be non-negative.\n");
    } 
	else 
	{
        printf("%d! = %ld\n", n, factorial(n));
    }
    return 0;
}
