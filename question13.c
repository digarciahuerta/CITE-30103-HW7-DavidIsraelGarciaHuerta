#include <stdio.h>

int main() 
{
    char line[101];
    int vowels = 0, consonants = 0, digits = 0;
    printf("Enter a line:\n");
    scanf("%[^\n]", line);
    for (int i = 0; line[i] != '\0'; i++) {
        char ch = line[i];
        if (ch >= 'a' && ch <= 'z') 
	{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
	    {
                vowels++;
            }
	    else 
	    {
                consonants++;
            }
        }
        else if (ch >= 'A' && ch <= 'Z') 
	{
            char lower = ch + 32;  
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') 
	    {
                vowels++;
            } 
	    else 
	    {
                consonants++;
            }
        }
        else if (ch >= '0' && ch <= '9') 
	{
            digits++;
        }
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    return 0;
}
