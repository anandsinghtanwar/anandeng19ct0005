#include <stdio.h>
#include <stdio.h>
struct frac
{
    int a;
    int b;
};
typedef struct frac Frac;
Frac inputfraction()
{
    Frac f;
    printf("Enter numerator:\n");
    scanf("%d",&f.a);
    printf("Enter denominator:\n");
    scanf("%d",&f.b);
    return f;
}
void inputarr(int tcase,Frac data[tcase])
{
    for(int i=0;i<tcase;i++)
    {
        data[i]=inputfraction();
    }
}
int find_gcd(int num1,int num2)
{
    int gcd;
    for(int i=1; i <=num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
    
}
Frac add(int tcase,Frac data[tcase])
{
    Frac sum;
    sum.a=0;
    sum.b=1;
    for(int i=0;i<tcase;i++)
    {
      sum.a=(data[i].a)*(sum.b)+((sum.a)*(data[i].b));
      sum.b=((sum.b)*(data[i].b));
        
    }
    int divi=find_gcd(sum.a,sum.b);
    sum.a=sum.a/divi;
    sum.b=sum.b/divi;
    return sum;
}
void displayoutput(int tcase,Frac data[tcase],Frac result)
{
    printf("\n");
    for(int i=0;i<tcase;i++)
    {
        if(i<tcase-1)
        {
          printf("%d/%d+",data[i].a,data[i].b);
        }
        else 
        {
           printf("%d/%d=%d/%d",data[i].a,data[i].b,result.a,result.b);
        }
    }
    
    
}
int main(void)
{
    int n,tcase;
    Frac result;
    printf("Enter the value of n:");
    scanf("%d",&tcase);
    Frac data[tcase];
    inputarr(tcase,data);
    result=add(tcase,data);
    displayoutput(tcase,data,result);
    return 0;
}
