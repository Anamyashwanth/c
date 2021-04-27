#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the num: ");
    scanf("%d",&num);
    i=1;
    while(i<=num-1)
    {
        if(num%2==0)
        {
            printf("not a prime number\n");
            break;

        }
        i++;
        if(i==num)
        {
            printf("prime number");
        }

        
    }
    return 0;
}