#include <stdio.h>
int main(){
    int a,b,c,s=0;
    for(int a=0;a<1000;a++) {
        s=0;
        for(int b=1;b<a;b++) {
        if(a%b==0)
    {s+=b;
    }
            }
            if(a==s)
    {printf("%dits factors are",s);
     int p=1;
         for(int b=1;b<a;b++) {
        if((a%b==0)&&(p==1)){
            printf("%d",b);
            p=2;
        }
            else if(a%b==0&&p==2)
    {printf(",%d",b);
    }
    }
     printf("\n");
    }
    }
    return 0;
}