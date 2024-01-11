#include<stdio.h>
#include<math.h>

int main(){
    float down,high;
    while(scanf(" %f",&down)!=EOF){
        scanf(" %f",&high);
        float area=down*high/2;
        printf("%.1f\n",area);
    }
    return 0;
}