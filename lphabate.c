#include<stdio.h>
void main()
{
    char c,x;
    printf("enter the character:");
    scanf("%c",&c);
    x=((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?printf("alphabet"):printf("not alphabet");

}
