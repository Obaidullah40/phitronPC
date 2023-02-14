#include<stdio.h>
int main()
{
    int x , y;
    printf("Please enter an input: ");
    scanf("%d %d",&x ,&y);
    if(x>y)
    {
        printf("X is large.");
    }
    else
    {
        if(x<y)
        {
             printf("Y is large.");
        }
        else
        {
            printf("they are equal.");
        }
    }

    return 0;
}



