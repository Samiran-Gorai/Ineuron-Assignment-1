#include<stdio.h>
void main()
{
    int r;
    float f;
    printf("Enter radius");
    scanf("%d",&r);
    f=3.14*r*r;
    printf("Area of circle is %f having the radius %d",f,r);
}