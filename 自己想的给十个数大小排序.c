#include <stdio.h>
int main(){
    int a[10],b[10],min,i,c=0,max,t,p;
    for(i=0;i<10;i++) {
        scanf("%d",&a[i]);
    }
    for(c=0;c<=9;c++){
        min=999999999;
        max=-999999999;
    for(i=0;i<10;i++) {
        if(a[i]<=min){
            min=a[i];
            p=i;
            }
        if(a[i]>=max){
            max=a[i];
        }
        }
        t=min;
        a[p]=max;
        b[c]=t;
       }
    for(c=0;c<10;c++)       
    printf("%d\n",b[c]);
    return 0;
    }