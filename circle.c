#include<stdio.h>
#define PI 3.14
void main()

{
    float r,a,c;
    printf("enter radius value:");
    scanf("%f",&r);
    c=PI*r*r;
    a=2*PI*r;
    printf("area of circle is %f & circumference of circle is %f",a,c);

}
