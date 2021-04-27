#include<stdio.h>
int main()
{
    int p,n;
    float r,si,ta;
    //printf("enter the values",p,n,r);
    printf("Please enter Prinicipal Amount: ");
    scanf("%d",&p);
    printf("Please enter Time in months : ");
    scanf("%d",&n);
    printf("Please enter Rate of Int: ");
    scanf("%f",&r);
    
    si=p*n*r/100;
    printf("The total Int is : %2.f\n",si);
    ta=si+p;
    printf("Yhe total amount is : %2.f\n",ta);

    return 0;
}