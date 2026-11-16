#include <stdio.h>
int main(){
    int a, i, p;
    for(a=100;a<=200;a++){
        p=1;
        for(i=2;i<a;i++){
            if(a%i==0){
                p=0;
                break; 
            }
        }
        if(p==1){
            printf("%d", a);
        }
     }
     return 0;
}
   