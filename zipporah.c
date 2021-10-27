#include<stdio.h>
int main()
{
    int x,y,sum,diff,product,quot,rem;
    printf("enter first number : ");
    scanf (" %d",&x);
    printf("enter second number : ");
    scanf (" %d",&y);
    sum = x + y;
    diff=x-y;
    product=x*y;
    quot=x/y;
    rem=x%y;
    printf("The sum of the two numbers is : %d", sum );
    printf("\n");
    printf("The difference of the two numbers is : %d", diff);
    printf("\n");
    printf("The product of the two numbers is : %d", product);
    printf("\n");
    printf("\nThe quotient of the two numbers is : %d", quot);
    printf("\nThe remainder of the two numbers is : %d", rem);
    return 0;
}
