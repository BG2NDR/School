#include <stdio.h>
int main(){
    int jw,jm,jc;
    for(jw=0;jw<=20;jw++)
        for(jm=0;jm<=33;jm++)
            for(jc=0;jc<=100;jc++)
                if(jw*5+jm*3+jc/3==100 && jw+jm+jc==100)
                    printf("%d %d %d\n",jw,jm,jc);
    return 0;
}