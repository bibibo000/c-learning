#include<stdio.h>
#include <math.h>
int main(){
    float x1,x2;
    int n,a,i;
    printf("请猜测一个数和一个最大循环次数以及目标数:");
    scanf("%f,%d,%d",&x1,&n,&a);
        for(int i=1;i<=n ;i++) {
        x2=(x1+(a/x1))/2;
            if(fabs(x1-x2)<1e-5)
    {printf("%f",x2); 
     break;
    }
            x1=x2;
    }
    return 0;
}