#include <stdio.h>
int main() {
    int a;
    int t = 0;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        t = t*10 + 2;
        sum = sum + t;
    }
    printf("%d\n", sum);
    return 0;
}