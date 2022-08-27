#include<stdio.h>
void main()
{
    int a=20,x;
    x=a++ + ++a - --a + a--;
    printf("%d\n",x);


}
