#include<stdio.h>
int fact(int);
int main()
{int n,a=1,r=0;
double j=1;  
printf("Enter the number of items:");
    scanf("%d",&n);
    printf("Enter the selected items: ");
    scanf("%d",&r);
    j=fact(n)/fact(n-r);
    printf("the factorial is  %lf",j);
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
