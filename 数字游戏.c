#include <stdio.h>
int main(){
    int m,i,p=0,q[10];
    printf("请输入一个小于1000000的正整数:");
    scanf("%d",&m);
    if(m<0||m>=1000000){
        printf("不听话是吧-_-");
    }
    else
        while(m>0){
            q[p]=m%10;
            p++;
            m=m/10;
        }
    printf("该数字的位数是:%d\n",p);
    printf("各位数为:");
    for( i=p-1;i>=0;i--) {
        printf("%d\n",q[i]);
    }
    for( i=0;i<p;i++) {
        printf("%d",q[i]);        
    }
}