#include <stdio.h>
int main(){
    int n, c,j,i;
    scanf("%d",&n);
    for(j=n,i=1;i<j;i++,j--){
        c=j*i;
    }
    printf("%d",c);
}