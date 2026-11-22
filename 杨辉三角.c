#include <stdio.h>
int main(){
    int a[10],i,j,p,q;
    for(i=0;i<=9;i++){
        a[i]=1;
        if(i>1){
        for(j=i-1;j>0;j--){
            a[j]=a[j]+a[j-1];
        }
            }
        for(j=0;j<=i;j++){
        printf("%d ",a[j]);
            if(j==i)
                printf("\n");
       }
    }
}