#include<stdio.h>
struct data
{
    char employeename[20];
    float  hourly_wage;
    float grosspay;
    float totaltime;
};
typedef struct data Data;
void input_details(int n,Data arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr[i].employeename);
        scanf("%f",&arr[i].hourly_wage);
        
    }
}
void input_timecard(int n,Data arr[])
{
    int tcards;
    float hours,min;
    char temp[20];
    scanf("%d",&tcards);
    for(int i=0;i<n;i++)
    {
        arr[i].totaltime=0.0;
    }
    for(int i=0;i<tcards;i++)
    {
        scanf("%s",temp);
        scanf("%f",&min);
        hours=min/60;
        for(int j=0;j<n;j++)
        {
            if(!strcmp(temp,arr[j].employeename))
            {
             arr[j].totaltime+=hours;
            }
        }
        
        
    }
}
void get_grosspay(int n,Data arr[])
{
    for(int i=0;i<n;i++)
    {
        arr[i].grosspay=0;
        if(arr[i].totaltime<=40)
         arr[i].grosspay=(arr[i].hourly_wage)*(arr[i].totaltime);
        else
         arr[i].grosspay=((arr[i].hourly_wage)*40)+(1.5*(arr[i].hourly_wage)*(arr[i].totaltime-40));
    }
}
void output(int n,Data arr[])
{
    for(int i=0;i<n;i++)
    {
        if(!arr[i].totaltime==0)
        printf("%s:\t%0.2f hours,\t $%0.2f\n",arr[i].employeename,arr[i].totaltime,arr[i].grosspay);
    }
}
    
int main()
{
    int n;
    scanf("%d",&n);
    Data arr[n];
    input_details(n,arr);
    input_timecard(n,arr);
    get_grosspay(n,arr);
    output(n,arr);
    
}
