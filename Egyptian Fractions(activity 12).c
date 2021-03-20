#include<stdio.h>
struct unit_fration
{
    int totalfrac;
    int frac[100];
};
typedef struct unit_fration Efrac;
struct result
{
    int a;
    int b;
};
typedef struct result Rfrac;
void input(int tcase,Efrac arr[tcase])
{
    for(int i=0;i<tcase;i++)
    {
        scanf("%d",&arr[i].totalfrac);
        for(int j=0;j<arr[i].totalfrac;j++)
        {
            scanf("%d",&arr[i].frac[j]);
        }
    }
}
int find_gcd(int num1,int num2)
{
    int d;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        d=i;
    }
    return d;
}

void sum(int tcase,Efrac arr[],Rfrac resultarr[])
{
    
    for(int i=0;i<tcase;i++)
    {
        int num=0,deno=1;
       for(int j=0;j<arr[i].totalfrac;j++)
       {
           num=(num*arr[i].frac[j])+(deno*1);
           deno=deno*arr[i].frac[j];
       }
       int divisor=find_gcd(num,deno);
       resultarr[i].a=num/divisor;
       resultarr[i].b=deno/divisor;
    }
}
void output(int tcase,Efrac arr[],Rfrac resultarr[])
{
    printf("\n");
    for(int i=0;i<tcase;i++)
    {
        for(int j=0;j<arr[i].totalfrac;j++)
        {
            if(j<arr[i].totalfrac-1)
            {
              printf("1/%d + ",arr[i].frac[j]);
            }
            else 
            {
               printf("1/%d = %d/%d",arr[i].frac[j],resultarr[i].a,resultarr[i].b);
            }
        }
        printf("\n");
    }
}

int main()
{
    int tcase;
    scanf("%d",&tcase);
    Efrac arr[tcase];
    Rfrac resultarr[tcase];
    input(tcase,arr);
    sum(tcase,arr,resultarr);
    output(tcase,arr,resultarr);
}
