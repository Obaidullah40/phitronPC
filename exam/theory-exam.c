#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a / 2;
    for (int i = 1; i <= b;i++){
        c = a % i;
        if(c == 0){
            d = i;
        }
    }
    if(d == 1){
        printf("Prime");
    }else{
        printf("Composite");
    }
    return 0;
}

