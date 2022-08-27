#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sum,avg;
    printf("Enter the marks sheets of student:\n");
    printf("Enter the marks of subject 1:" );
    scanf("%d",&sub1);
    printf("Enter the marks of subject 2:" );
    scanf("%d",&sub2);
    printf("Enter the marks of subject 3:" );
    scanf("%d",&sub3);
    sum=sub1+sub2+sub3;
    avg=sum/3;
    printf("-----------------------------------\n");
    printf("-----------MARKS SHEETS------------\n");
    printf("SUBJECT 1 : %d\n",sub1);
    printf("SUBJECT 2 : %d\n",sub2);
    printf("SUBJECT 3 : %d\n",sub3);
    printf("AVERAGE OF 3 SUBJECTS : %d\n",avg);
    printf("-----------------------------------");
}

