#include <stdio.h>
int main() {
    int a,sum=0;
    int factors[100];
    int i=0;
    scanf("%d", &a);
    for(int n=1;n<a;n++){
        if(a%n==0){
            factors[i]=n;
            i++;
            sum+=n;
        }
    }
    if (sum==a){
        printf("%d its factors are",a);
        for(int j=0;j<i;j++){
            printf(" %d", factors[j]);
        }
    }
    return 0;
}