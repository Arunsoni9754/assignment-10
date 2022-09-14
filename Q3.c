
#include<stdio.h>
int check(int);
 int main()
 {
    int a;
    printf("1 for even \n0 for odd\n");
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d",check(a));

    return 0;
 }
 int check(int r)
 {
    if(r%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }
