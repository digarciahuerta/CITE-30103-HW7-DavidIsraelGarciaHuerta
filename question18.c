#include <stdio.h>

struct Student 
{
    char name[40];
    int roll;
    float marks;
};

int main() 
{
    struct Student students[5];
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    int topIndex = 0;
    for (int i = 1; i < 5; i++) 
    {
        if (students[i].marks > students[topIndex].marks)
            topIndex = i;
    }
    printf("\nTop Student:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll: %d\n", students[topIndex].roll);
    printf("Marks: %.2f\n", students[topIndex].marks);
    return 0;
}
