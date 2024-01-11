#include<stdio.h>
#include<math.h>

int main(){
    float a;
    while(scanf(" %f",&a)!=EOF){
        float t;
        t=a*(1.8)+32.0;
        printf("%.1f\n",t);
    }
    
    
    return 0;
}