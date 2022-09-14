#include<stdio.h>
float SI (float,float,float);
float main()
{float p,r,t;  
printf("Enter the principal amount:\n");
    scanf("%f",&p);
    printf("Enter the percent rate:\n");
    scanf("%f",&r);
    printf("Enter the time in years\n");
    scanf("%f",&t);
    printf("The simple interest is %f",SI(p,r,t));

    return 0;
}
float SI(float a,float b,float c)
{
    return (a*b*c)/100;
}
