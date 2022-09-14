#include<stdio.h>
int digit(int,int);
int main()
{
    int i,d;
    printf("Enter the number ");
    scanf("%d",&i);
    printf("Enter the digit: ");
    scanf("%d",&d);
    if(digit(i,d))
    {
        printf("It contain the digit");
    }
    else
    printf("It do not contain the digit");
return 0;
}
int digit(int j,int k)
{
    while(j!=0)
    {
        int temp=j%10;
        j=j/10;
        if(temp==k)
        return 1;
else 
    return 0;
}
}
