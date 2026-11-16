#include <stdio.h>
int main(){
    int a,b,c,n,d;
    for(n=100;n<=999;n++){
        a=n%10;
        b=(n/10)%10;
        c=(n/100)%10;
        d=a*a*a+b*b*b+c*c*c;
        if(n==d)
            printf("%d\n",n);
    }
}