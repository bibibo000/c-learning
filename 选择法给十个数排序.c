#include <stdio.h>
int main(){
    int a[10],b,c,i,d;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);        
    }
    for(i=0;i<10;i++){
        b=i;
        for(d=b;d<10;d++){
            if(a[b]>a[d]){
                c=a[b];
                a[b]=a[d];
                    a[d]=c;
            }
            }
        }
        for(i=0;i<10;i++) {
            printf("%d ",a[i]);
    }
}