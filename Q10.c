#include<stdio.h>
#include<math.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}   
void prime(int a)
{
    int i;
    // phele toh 2 se hoga agar  ho rha hai toh
    while(a%2==0)
    {
        printf("%d ",2);
        a=a/2;
    }
    // phir 3 se us a ke sqrt tak chalega 
    for(i=3;i<=sqrt(a);i++)
    {
        while(a%i==0)
        {
            printf("%d ",i);
            a=a/i;
        }
    }
    // for numbers who have no prime factors except itself
    if(a>2)
    {
        printf("%d",a);
    }
}
