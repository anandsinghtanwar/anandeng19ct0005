#include<stdio.h>
struct student
{
    char name[100];
    float avg;
    char grade;
    int scores[100];
    
};
typedef struct student std;


struct gradebook{
    std data[100];
    char coursename[100];
    int tstud;
    int tscores;
    float weights[100];
    float tweights;
};
typedef struct gradebook gdb;


std input_one_student(int tscores)
{
    std temp;
    scanf("%s",temp.name);
    for(int k=0;k<tscores;k++)
    {
        scanf("%d",&temp.scores[k]);
    }
    return temp;
}

void input_n_student(int tcase,gdb g[tcase])
{
    for(int i=0;i<tcase;i++)
    {
        scanf("%s",g[i].coursename);
        scanf("%d",&g[i].tstud);
        scanf("%d",&g[i].tscores);
        g[i].tweights=0;
        for(int j=0;j<g[i].tscores;j++)
        {
            scanf("%f",&g[i].weights[j]);
            g[i].tweights+=g[i].weights[j];
        }
        for(int j=0;j<g[i].tstud;j++)
        {
            g[i].data[j]=input_one_student(g[i].tscores);
        }
        
    }
}


void compute_one_student(gdb *g)
{
    for(int i=0;i<g->tstud;i++)
    {
       float sum=0;
       for(int k=0;k<g->tscores;k++)
        {
            sum+=(g->data[i].scores[k]*g->weights[k]);
        }
        g->data[i].avg=sum/(g->tweights);
        if(g->data[i].avg>=0 && g->data[i].avg<60)
        g->data[i].grade='F';
        else if(g->data[i].avg>=60 && g->data[i].avg<70)
        g->data[i].grade='D';
        else if(g->data[i].avg>=70 && g->data[i].avg<80)
        g->data[i].grade='C';
        else if(g->data[i].avg>=80 && g->data[i].avg<90)
        g->data[i].grade='B';
        else if(g->data[i].avg>=90 && g->data[i].avg<=100)
        g->data[i].grade='A';
    }
}

void compute_n_student(int tcase,gdb g[tcase])
{
    for(int j=0;j<tcase;j++)
    {
        
        compute_one_student(&g[j]);
        
    } 
}


void print_one_student(std d)
{
    printf("%s\t%0.2f\t%c\n",d.name,d.avg,d.grade);
    
}

void print_n_student(int tcase,gdb g[])
{
    for(int i=0;i<tcase;i++)
    {
        printf("%s\n",g[i].coursename);
        for(int j=0;j<g[i].tstud;j++)
        {
            print_one_student(g[i].data[j]);
        }
    }
}

int main()
{
    int tcase;
    scanf("%d",&tcase);
    gdb g[tcase];
    input_n_student(tcase,g);
    compute_n_student(tcase,g);
    print_n_student(tcase,g);
    return 0;
}
