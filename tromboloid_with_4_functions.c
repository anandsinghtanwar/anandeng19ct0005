//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float h,b,d;
void input() {
    printf("Enter value of h:");
    scanf("%f",&h);
    printf("Enter value of d:");
    scanf("%f",&d);
    printf("Enter value of b:");
    scanf("%f",&b);
}

float vot(flaot h, float b, float d) { 
    if(b==0) return 0;
    else return ((1/ 3.0)*((h*d*b)+(d/b))); 
    }

void output(float Volume) { printf("Volume of Tromboloid %lf\n",Volume); }

int main() {
    input();
    output(vot(h,b,d));
    return 0;
}
