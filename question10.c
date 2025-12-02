#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;
    
    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMatrix A:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++)
       	{
            printf("%d ", b[i][j]);
        }
	        printf("\n");
    }
 
    printf("\nSum Matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
	{
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }   
    return 0;
}
