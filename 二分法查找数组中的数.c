#include <stdio.h>
int main(){
    int a[15],i,j,t,b,c,d;
    printf("请输入十五位数组吧:");
    for(i=0;i<15;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<14;i++){
        for(j=0;j<14-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("请输入一个数吧:");
    scanf("%d",&b);
    c=14;
    d=0;
    while(d<=c){
        if(b<a[(c+d)/2]){
            c=c-1;
       }
        if(b>a[(c+d)/2]){
            d=d+1;
        }
        if(b==a[(c+d)/2]){
            printf("下标是%d",(c+d)/2);
            break;
        }
        if(d==c&&b!=a[d]){
            printf("此数不在里面");
        }
    }
}