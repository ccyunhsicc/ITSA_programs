#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    while(scanf(" %f",&a)!=EOF){
        scanf(" %f",&b);
        float d=sqrt(a*a+b*b);
        if(d<=100.0){
            printf("inside\n");
        }else{
            printf("outside\n");
        }
    
    }
    return 0;
}