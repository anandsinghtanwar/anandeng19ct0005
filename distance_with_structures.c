//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
    float x1,y1;
    float x2,y2;
};
typedef struct point pp;

void input()
{
    float d;
    pp p;
    printf("enter cordinate of first point");
    scanf("%f%f",&p.x1,&p.y1);
    printf("enter cordinate of second point");
    scanf("%f%f",&p.x2,&p.y2);
    d=sqrt((p.x2-p.x1)*(p.x2-p.x1)+(p.y2-p.y1)*(p.y2-p.y1));
    printf("distance is %f",d);
    
}

void main()
{
    input();
}
