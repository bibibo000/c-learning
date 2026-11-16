#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,e,fx;
    scanf("%f,%f",&a,&b);
    fx=2*x*x*x-4*x*x+3*x-6;
    if(f(a)*f(b)>0){
        printf("里面并没有零点");
    }
    else
        do{
        c=(a+b)/2;
    if(f(c)*f(b)<0){
        a=c;
    }
    else
        b=c;
        }
    while(f(c)>1e-5)
        printf("%f",c);
}