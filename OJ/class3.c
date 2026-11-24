#include <stdio.h>
#include <math.h>
int main(){
    float x1,y1,r1,x2,y2,r2;
    scanf ("%f%f%f%f%f%f",&x1,&y1,&r1,&x2,&y2,&r2);
    if (pow(x1-x2,2)+pow(y1-y2,2)<pow(r1+r2,2))
        printf("Yes");
    else
        printf("No");
return 0;
}