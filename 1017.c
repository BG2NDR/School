#include <stdio.h>
int main() {
    int a,sum;
    scanf("%d", &a);
    for(int n=1;n<a;n++){
        if(a%n==0){
            printf("%d\n", n);
            sum+=n;
        }
    }
    if (sum==a){
        printf("%d its factors are:\n", a);
    }
    return 0;
}