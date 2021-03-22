#include<stdio.h>
#include<math.h>
struct point{
    float a;
    float b;
};
typedef struct point Vertex;

Vertex input_side()
{
    Vertex p;
    scanf("%f",&p.a);
    scanf("%f",&p.b);
    return p;
    
}

void input(int tcase,Vertex arr[tcase][3])
{
    for(int i=0;i<tcase;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=input_side();
        }
    }
    
}

float compute(int i,Vertex arr[][3])
{
    
    float d1,d2,d3;
    float area;
    d1=sqrt(pow((arr[i][0].a)-(arr[i][1].a),2)+pow((arr[i][0].b)-(arr[i][1].b),2));
    d2=sqrt(pow((arr[i][0].a)-(arr[i][2].a),2)+pow((arr[i][0].b)-(arr[i][2].b),2));
    d3=sqrt(pow((arr[i][2].a)-(arr[i][1].a),2)+pow((arr[i][2].b)-(arr[i][1].b),2));
    if (d1>d2 && d1>d3)
    {
        area=(d2*d3);
    }
    else if ( d2>d1 && d2>d3)
    {
        area=(d1*d3);
    }
    else
    {
        area=(d1*d2);
    }
    return area;
   
    
}
void get_area(int tcase,Vertex arr[tcase][3],float result[tcase])
{
    int i;
    for(i=0;i<tcase;i++)
    {
        result[i]=compute(i,arr);
    }
}

Vertex output(int tcase,Vertex arr[tcase][3],float result[tcase])
{
    for(int i=0;i<tcase;i++)
    {
        printf("Area of rectangle with vertices (%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f) is %0.1f\n",arr[i][0].a,arr[i][0].b,arr[i][1].a,arr[i][1].b,arr[i][2].a,arr[i][2].b,result[i]);
    }
}
int main()
{
    int tcase;
    scanf("%d",&tcase);
    Vertex arr[tcase][3];
    float result[tcase];
    input(tcase,arr);
    get_area(tcase,arr,result);
    output(tcase,arr,result);
}


