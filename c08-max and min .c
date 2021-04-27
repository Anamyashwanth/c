#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    max=min=a;
    if(b>max){
        max=b;

    }
    if(c>max){
        max=c;
    }
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
        
    }
    printf("max=%d and min=%d,max,min);
           return 0;
    
}
