#include<stdio.h>

int main()
{
    int n;
    printf("Please enter your main chocolate: ");
    scanf("%d",&n);
    int choc = n, pack = n;

    while(pack>=4)
    {
        choc += (pack/4);
        pack = (pack/4) + (pack%4);
    }
    printf("%d", choc);
    return 0;
}
