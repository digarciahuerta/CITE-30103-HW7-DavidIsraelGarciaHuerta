#include <stdio.h>

int main() 
{
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    int length = 0;
    while (word[length] != '\0') 
    {
        length++;
    }
    int isPalindrome = 1;  
    for (int i = 0; i < length / 2; i++) 
    {
        if (word[i] != word[length - 1 - i]) 
	{
            isPalindrome = 0;  
            break;
        }
    }
    
    if (isPalindrome) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}
