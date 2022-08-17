#include<stdio.h>
void main()
{
    int m,h;
    printf("Enter time :");
    
    scanf("%d",&m);
    printf(":");
    scanf("%d",&h);
    
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"",m,h,m,h);

}