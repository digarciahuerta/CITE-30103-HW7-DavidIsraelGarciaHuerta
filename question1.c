#include <stdio.h>

float toCelsius(float f)
{
	return (f -32) * 5 / 9;
}
int main()
{
	float f;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &f);
	printf("%.2f Fahrenheit = %.2f Celsius",f, toCelsius(f));
	return 0 ;
}
