#include<stdio.h>
#include<math.h>

int main(){
    long long a;
    while(scanf(" %lld",&a)!=EOF){
        if(a>=6){
            printf("6");
        }
        if(a>=28){
            printf(" 28");
        }
        if(a>=496){
            printf(" 496");
        }
        if(a>=8128){
            printf(" 8128");
        }
        if(a>=33550336){
            printf(" 33550336");
        }
        if(a>=8589869056){
            printf(" 8589869056");
        }
        if(a>=137438691328){
            printf(" 137438691328");
        }
        printf("\n");
    }
    return 0;
}