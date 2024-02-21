#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter length:");
    scanf("%d", &a);
    printf("Enter heigth:");
    scanf("%d", &b);
    printf("Enter width:");
    scanf("%d", &c);
    d=a*b*c;
    printf("Volume is %d", d);
}

