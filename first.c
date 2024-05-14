#include<stdio.h>
int main()
{
    int a=2,b=3,c=4,d=5,e=6;
    int a3,a4;
    a3=a>b?(a>c?a:c):(b>c?b:c);
    printf("%d",a3);
    a4=a+b>c!=d==e;
    printf("%d",a4);
    return 0;
}