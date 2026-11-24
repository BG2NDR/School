#include <stdio.h>

int main() {
    int a = 0;  //字母数量
    int b = 0;  //数字数量
    int c = 0;  //空格数量
    int d = 0;  //其它字符数量
    int ch = getchar();
    while (ch != '\n' && ch != EOF){
        if (ch>='a' && ch<='z'|| ch>='A' && ch<='Z')
        a++;
        else if(ch>='0' && ch<='9')
        b++;
        else if (ch==' ')
        c++;
        else
        d++;
        ch = getchar();
    }
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}