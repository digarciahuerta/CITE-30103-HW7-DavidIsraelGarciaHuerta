#include <stdio.h>
int main()
{
	int n;
	int arr[100];
	printf("enter number of integers");
	scanf("%d", &n);
	printf("enter %d integers",n);
	int even = 0;
	int odd = 0;
	for (int i = 0; i <n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 ==0)
		{
			even++;
		}
		else
		{
		odd++;
		}	
	}
	printf("even = %d", even);
	printf("odd = %d", odd);
	return 0; 
} 
