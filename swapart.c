#include<stdio.h>
void main()
{

    int a,b;
    printf("enter a & b value ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaapping a= %d & b=%d",a,b);
}
