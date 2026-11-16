#include <stdio.h>
int main(){
    char ch;
    int a=0,b=0,c=0,d=0;
    ch=getchar();
    while(ch!='\n')
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            a++;
        else if(ch>=1&&ch<=9)
        b++;
        else if(ch==' ')
        c++;
        else
            b++;
    ch=getchar();
    printf("%d,%d,%d,%d",a,b,c,d);
}