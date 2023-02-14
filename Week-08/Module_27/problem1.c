#include<stdio.h>

struct Point{
    int x;
    int y;
};

int main()
{
    struct Point p1 = { 1, 1 };
    struct Point p2 = { 4, 5 };

    int ans = manhattan(p1, p2);
    return 0;
}