#include<stdio.h>
void main()
{

    int a,b,temp;
    printf("enter a & b value ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaapping a= %d & b=%d",a,b);
}
