#include<stdio.h>

struct Student
{
    int roll;
    char name[60];
    double marks;
};

void printStudent(int n, struct Student s)
{
    printf("Information of Student %d\n", n);
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Mark -> %lf\n", s.marks);
}

int main()
{
    struct Student cls[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("\nPlease enter Roll -> \n");
        scanf("%d", &cls[i].roll);
        printf("Please enter Name -> \n");
        scanf("%s", cls[i].name);
        printf("Please enter mark -> \n");
        scanf("%lf", &cls[i].marks);
    }
    
    for (int i = 0; i < 3; i++) 
    {
        if (cls[i].roll % 2 == 0)
        { 
            printStudent(i, cls[i]);
        }
    }
    
    return 0;
}