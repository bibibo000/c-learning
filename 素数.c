#include <stdio.h>
int main()
{
    int a ,p=1;
    printf("请输入数字：");
    scanf("%d",&a);
    for(int i=2;i<a;i++){
    	if(a%i==0){
    		p=0;
    		break;
        }
    }
    if(p==1){
        printf("是素数");
    }
    if(p==0){
        printf("不是素数");
    }
    
    return 0;
}
     
     