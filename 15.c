#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    double sum = 0;
    for (int f=0; f<=a; f++){
        sum = sum + f;
    }
    for (int f=0; f<=b; f++){
        sum = sum + f * f;
    }
    for (int f=0; f<c; f++){
        sum = sum + 1.0 / (f + 1);
    }
    printf ("%.2lf", sum);
    return 0;
}