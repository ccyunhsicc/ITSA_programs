#include<stdio.h>
#include<math.h>

int main(){
    float up,down,high;
    while(scanf(" %f",&up)!=EOF){
        scanf(" %f %f",&down,&high);
        float area=(up+down)*high/2;
        printf("Trapezoid area:%.1f\n",area);
    }
    return 0;
}