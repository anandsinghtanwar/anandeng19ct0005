#include<stdio.h>
struct frac
{
   int a;
   int b;
};
typedef struct frac Frac;

Frac input()
{

    Frac f;
    printf("Enter numerator:");
    scanf("%d",&f.a);
    printf("Enter denominator:");
    scanf("%d",&f.b);
    return f;
}
int find_gcd1(int num1,int num2)
{
    int gcd;
    for(int i=1; i <=num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
    
}
int find_gcd2(int num1,int num2)
{
    int gcd;
    //when loop will start form i=2 it will show garbage value for prime no
    //so we have to initialize gcd=1
    gcd=1;
    for(int i=2; i <=num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
    
}


Frac add(Frac f1,Frac f2)
{
 
   Frac sum,simpl;
   int divi;
   sum.a=((f1.a)*(f2.b))+((f2.a)*(f1.b));
   sum.b=((f1.b)*(f2.b));
   divi=find_gcd1(sum.a,sum.b);
   simpl.a=sum.a/divi;
   simpl.b=sum.b/divi;
   return simpl;
}
