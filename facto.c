#include <stdio.h>
int main()
{
     int num,i;long int fact=1;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial is %d",fact);

    return 0;
}
