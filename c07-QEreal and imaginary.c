#include<stdio.h>
int main()
{
    float a,b,c,d,root1,root2,real,imag;
    printf("write a c program to find roots of quadratic equation\n");
    printf("\n\tplease the coefficents of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if(d>0)
    {
        root1=-b+d/(2*a);
        root2=-b-d/(2*a);
        printf("root1=%.2f and root2=%.2f",root1,root2);
    }
    else if(d==0)
     {
         root1=root2=-b/(2*a);
         printf("root1=root2=%.2f",root1);
     }
     else
     {
         real=-b/(2*a);
         imag=d/(2*a);
         printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi",real,imag,real,imag);
     }
     getch();
     return 0;
     }
     