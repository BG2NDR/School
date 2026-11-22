#include <stdio.h>
#include <math.h>
int main(){
    float x,y,len,wid;
    scanf("%f%f%f%f",&x,&y,&len,&wid);
    if (abs(x)<len/2 && abs(y)<wid/2)
        printf("in\n");
    else
        printf("out\n");
    return 0;
}