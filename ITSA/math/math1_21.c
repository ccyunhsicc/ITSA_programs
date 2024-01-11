#include<stdio.h>
#include<math.h>

int main(){
    int a;
    long long A[20];
    for(int i=0;i<20;++i){
        if(i==0||i==1){
            A[i]=1;
        }else{
            A[i]=i*A[i-1];
        }
    }
    while(scanf(" %d",&a)!=EOF){
        printf("%lld\n",A[a]);
        
    }
    return 0;
}