#include <stdio.h>
#include <stdio.h>
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
Frac add(Frac f,Frac result)
{
 
   Frac add;
   add.a=((f.a)*(result.b))+((result.a)*(f.b));
   add.b=((f.b)*(result.b));
   return add;
}
Frac gcd(Frac result)
{
    int gcd;
    Frac simp;

    for(int i=1; i <=result.a && i <= result.b; ++i)
    {
        if(result.a%i==0 && result.b%i==0)
            gcd = i;
    }
    simp.a=result.a/gcd;
    simp.b=result.b/gcd;
    return simp;
    
}


Frac output(Frac s)
{
    printf("The answer is: %d/%d",s.a,s.b);
}
int main(void)
{
    int n;
    float sum=0.0;
    Frac f,result,s;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
           result=input();
        }
        else
        {
           f=input();
           result=add(f,result);
           
        }
    
    }
    
    s=gcd(result);
    output(s);
    return 0;
}

