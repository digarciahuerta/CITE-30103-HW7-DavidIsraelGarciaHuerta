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
    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) 
    {
        printf("%-20s %-10d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    return 0;
}
