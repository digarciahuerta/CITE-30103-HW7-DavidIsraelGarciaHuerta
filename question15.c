#include <stdio.h>

int main() 
{
    char line[101];
    printf("Enter a line (max 100 chars):\n");
    fgets(line, 101, stdin);
    int words = 0, inWord = 0;
    for (int i = 0; line[i] != '\0'; i++) 
    {
        if (line[i] != ' ' && line[i] != '\n') 
	{
            if (!inWord) 
	    {
                words++;
                inWord = 1;
            }
        } 
	else 
	{
            inWord = 0;
        }
    }
    printf("Number of words = %d\n", words);
    return 0;
}
