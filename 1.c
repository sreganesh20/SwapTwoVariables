#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\na: %d b: %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swap a: %d b: %d\n",a,b);
    a

}
