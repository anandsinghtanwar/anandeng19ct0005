//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,d;
    printf("enter cordinates for first points");
    scanf("%f%f",&x1,&y1);
    printf("enter cordinates for second points");
    scanf("%f%f",&x2,&y2);
    d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("distance is %f",d);
}
