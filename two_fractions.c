//WAP to find the sum of two fractions.
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


Frac add(Frac f1,Frac f2)
{
 
   Frac add;
   add.a=((f1.a)*(f2.b))+((f2.a)*(f1.b));
   add.b=((f1.b)*(f2.b));
   return add;
}

Frac gcd(Frac z)
{
    int gcd;
    Frac simp;

    for(int i=1; i <=z.a && i <= z.b; ++i)
    {
        if(z.a%i==0 && z.b%i==0)
            gcd = i;
    }
    simp.a=z.a/gcd;
    simp.b=z.b/gcd;
    return simp;
    
}

void output(Frac f1, Frac f2, Frac s)
{
  printf("The sum of %d/%d and %d/%d is %d/%d",f1.a,f1.b,f2.a,f2.b,s.a,s.b);
}

int main(void)
{
   int n,d;
   Frac f1,f2,z,s;
   f1=input();
   f2=input();
   z=add(f1,f2);
   s=gcd(z);
   output(f1,f2,s);
   return 0;
}
