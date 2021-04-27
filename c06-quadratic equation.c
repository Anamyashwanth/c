#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float root_part,denom;
    
    printf("please a,b,c, of quadratic equation");
    scanf("%f%f%f",&a,&b,&c);

    root_part=sqrt(b*b-4*a*c);
    denom=2*a;
    root1=(-b+root_part)/denom;
    root2=(-b-root_part)/denom;
     printf("root1=%f\n",root1);
     printf("root2=%f",root2);
     printf("\n");
     
    return 0;
    

}