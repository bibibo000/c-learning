#include<stdio.h>
int main(){
    float a,b,c,s,i,d;
    a=1;
        b=2;
    s=0;
    for(i=1;i<=20;i++){
        c=b/a;
        d=a;
        a=b;
        b=d+b;
        s+=c;
    }
    printf("%f",s);
}