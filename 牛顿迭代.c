#include <stdio.h>
#include <math.h>
int main(){
    float fx,gx,a,b;
    int i,n;
    printf("请选择你猜的值以及最大的迭代次数:");
    scanf("%f,%d",&a,&n);
    for(int i=1;i<n;i++) {
        fx=2*a*a*a-4*a*a+3*a-6;
            gx=6*a*a-8*a+3;
        b=a-fx/gx;
            if(fabs(a-b)<1e-5){
                printf("%f",b);
                break;
                }
            else
                a=b;
    }
}