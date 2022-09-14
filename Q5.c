#include<stdio.h>
void odd(int);
int main()
{
    int i;
    printf("Enter the number of terms:");
    scanf("%d",&i);
    odd(i);
    return 0;
}
void odd(int b)
{
    int c;
    for(c=0;c<b;c++)
    {
        printf("%d ",2*c+1);
    }
}
