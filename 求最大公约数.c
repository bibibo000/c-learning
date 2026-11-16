#include <stdio.h>
int main(){
    int m, n, j;
    scanf("%d%d",&m,&n);
    for(int j=m<n?m:n;j >1 ;j--) {
        if(m%j==0&&n%j==0)
    {printf("%d",j);
     break;
    }
    }
}
    