#include<stdio.h>
void  main()
{
 int a,b;
 printf("enter two integer:");
 scanf("%d%d",&a,&b);
 ( b-a==6|| a-b==6 || a+b==6)?printf("6"):printf("not six");
}
