#include <stdio.h>
int main(){
    int n,i,j,b,next_j,next_i;
    printf("输入一个奇数魔方数：");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    if(n%2==0){
        printf("不听话是吧。。。");
        return -1;
    }
    i=0;
    j=(n-1)/2;
    for(b=1;b<=n*n;b++){
        a[i][j]=b;
        next_i=i-1;
        next_j=j+1;
        if(next_i<0){
            next_i=n-1;
        }
        if(next_j>=n){
            next_j=0;
        }
        if(a[next_i][next_j]!=0){
            next_i=i+1;
            next_j=j;
        }
        i=next_i;
        j=next_j;
    }
    for(i = 0;i < n;i++) {
        for(j = 0;j < n;j++) {
            printf("%4d",a[i][j]);
    }
        printf("\n");
    }
}