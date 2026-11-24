#include <stdio.h>
#include <math.h>
int main() {
    int x,y,m;
    int i = 0;
    scanf("%d", &x);
    y=x,m=x;
    //位数
    while (x != 0) {
        x = x / 10;
        i = i + 1;
    }
    printf("%d\n", i);
    //数字提取
    for (;i>0;i--) {
        int z = (int)y/(int)pow(10,i-1);
        printf("%d ", z);
        y = (int)y%(int)pow(10,i-1);
    }
    printf("\n");
    //逆向输出
    while(m!=0)
    {
        printf("%d", m%10);
        m = m/10;
    }
    return 0;
}