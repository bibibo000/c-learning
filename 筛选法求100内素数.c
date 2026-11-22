# include <stdio.h>
int main(){
    int a[100],b,c,i,d=0;
    for(i=2;i<100;i++) {
            b=1;
        for(c=2;c<i;c++){
            if(i%c==0){
                b=0;
                    break;
            }
       }
        if(b==1){
            a[d]=i;
            d++;
        }
    }
    for(int i=0;i<d;i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}