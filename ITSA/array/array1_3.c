#include<stdio.h>

int main(){
    int A[6];
    for(int i=0;i<6;++i){
        scanf(" %d",&A[i]);
    }
    int sum=0;
    for(int i=0;i<6;++i){
        sum+=A[i]*A[i]*A[i];
    }
    printf("%d\n",sum);
    return 0;
}