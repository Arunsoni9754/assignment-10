#include<stdio.h>
int fact(int);
int main()
{int a=1,r=0;  
printf("Enter the number ");
    scanf("%d",&r);
    printf("the factorial is  %d",fact(r));
    return 0;
}
int fact(int a)
{
    int j=1,i;
    for(i=1;i<=a;i++)
    {
        j=j*i;
    }
    return j;
}
