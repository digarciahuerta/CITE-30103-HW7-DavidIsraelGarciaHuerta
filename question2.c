#include <stdio.h>
int max3(int a, int b, int c)
{
int max = a;
if (b>max)
{
	max = b;
}
if (c>max)
{
	max = c;
}
return max;
}
int main()
{
	int a;
	int b;
	int c;
	printf("enter 3 integers");
	scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
	printf("max num is %d", max3(a,b,c));
	return 0;
}
