#include<math.h>
#include<stdio.h>
int main()
{
    float a;
    int base,power;
    

    printf("please enter the  base value");
    scanf("%d",&base);
    printf("please enter the power value");
    scanf("%d",&power);

    a =pow(base,power);
    printf("%f",a);
    
}