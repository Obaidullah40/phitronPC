#include<stdio.h>
int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d" , &x);
    if(x % 2 == 0)
    {
        int a,b,s;
        printf("Please enter the number: ");
        scanf("%d %d" , &a, &b);
        s = a + b;


    printf("The sum  of two numbers is %d", s);
    }
    else
    {
        int a,b,s;
        scanf("%d &d" , &a, &b);
        s = a-b;


    printf("The mainus  of two numbers is %d", s);
    }
    return 0;
}
