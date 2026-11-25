#include <stdio.h>
int judgement(int b,int factors[]);
int main() {
    int a;
    int factors[100];
    scanf("%d", &a);
    for(int b=1;b<=a;b++){
        i=judgement(b,factors);
    }
    if (sum==a){
        printf("%d its factors are",a);
        for(int j=0;j<i;j++){
            printf(" %d", factors[j]);
        }
    }
   return 0;
}

int judgement(int b,int factors[]){
    int i=0;
    int sum=0;
    for(int n=1;n<b;n++){
        if(b%n==0){
            factors[i]=n;
            i++;
            sum+=n;
        }
    }
    if(sum==b)
        return i;
    else
        return 0;
}