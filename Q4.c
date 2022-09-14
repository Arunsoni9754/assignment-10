#include<stdio.h>
void natural(int);
int main()
{
    int i;
    printf("Enter the number of terms:");
    scanf("%d",&i);
    natural(i);
}
void natural(int b)
{
    int c;
    for(c=1;c<=b;c++)
    {
        printf("%d ",c);
    }
}
