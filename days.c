#include<stdio.h>
void main()
{
    int days,year,month,weeks;
    printf("Enter number of days:");
    scanf("%d",&days);
    year=days/365;
    month=days/30;
    weeks= days/7;
    printf("%d\t%d\t%d",weeks,month,year);


}
