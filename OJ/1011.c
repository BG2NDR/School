//By BG2NDR
#include <stdio.h>
int main() {
    int m,n,y,j,k;
    scanf("%d%d", &m,&n);
    j=m;
    k=n;
    //求最大公约数
    while (n>0)
    {
        y=m%n;
        if (y==0)
        {
            printf("%d ",n);
            break;
        }
        else
        { 
            m=n;
            n=y;
        }
    }
    //求最小公倍数
    printf("%d", j * k / n);
    return 0;
}