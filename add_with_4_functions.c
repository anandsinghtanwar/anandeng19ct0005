//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
void sum (int ,int );
void output(int );

void input()
{
  int a,b;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);
  sum(a,b);
}

void sum(int a,int b)
{
   int sum1;
   sum1=a+b;
   output(sum1);
  
}
void output(int sums)
{
   printf("sum of the numbers is %d",sums);
}

void main()
{
    input();
    
}
