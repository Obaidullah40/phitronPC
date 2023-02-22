#include<stdio.h>

struct Student
{
    int roll;
    char name[60];
    double marks;
};


int main()
{
    struct Student cls[5];
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter Roll -> \n");
        scanf("%d", &cls[i].roll);
        printf("Please enter Name -> \n");
        scanf("%s", cls[i].name);
        printf("Please enter mark -> \n");
        scanf("%lf", &cls[i].marks);
    }
    
    for (int i = 0; i < 5; i++) 
    {
        printf("Information of Student %d\n", i);
        printf("Roll -> %d\n", cls[i].roll);
        printf("Name -> %s\n", cls[i].name);
        printf("Mark -> %lf\n", cls[i].marks);
    }
    
    return 0;
}