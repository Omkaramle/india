#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=10;
    printf("%d\n",(a<b)&&(a>b));
    printf("%d\n",a&&b);
    printf("\n");
    printf("%d\n",(a<b)||(a>b));
    printf("%d\n",a||b);
    printf("\n");
    printf("%d\n",!((a<b)||(a>b)));
    printf("%d\n",!(a||b));
}

