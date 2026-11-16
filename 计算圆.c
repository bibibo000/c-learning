#include <stdio.h>
#define PI 3.1415926
int main(){
    double r,h,C,s,S,v,V;
    scanf("%lf%lf",&r,&h);
        C=2*PI*r;
        s=PI*r*r;
        S=4*PI*r*r;
        v=4.00/3.00*PI*r*r*r;
        V=s*h;
    printf("%.2f%.2f%.2f%.2f%.2f",C,s,S,v,V);
}