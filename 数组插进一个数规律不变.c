#include <stdio.h>
int main(){
    int a[10],i,m,b,t,c,d=-1,j;
    for(i = 0;i < 9;i++) {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 9;i++) {
        b=i;
        d++;
        for( j = b;j < 9;j++) {
            if(a[b]>a[j]){
                t=a[b];
                a[b]=a[j];
                a[j]=t;
            }
    }
    }
    for(i = 0;i < 9;i++) {
        printf("%d ",a[i]);
    }
    printf("请再输入一个数吧！\n输入:");
    scanf("%d",&c);
    a[d+1]=c;
    for(i = d;i >= 0;i--) {
        if(a[d+1]<a[i]){
            t=a[d+1];
            a[d+1]=a[i];
            a[i]=t;
            d--;
        }
        else{
            break;
        }
    }
    for( i = 0;i < 10;i++) {
        printf("%d ",a[i]);
    }
}