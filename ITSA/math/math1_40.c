#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        int sum=0;
        sum=(a+1)*a/2;
        for(int i=1;i<a;++i){
            printf("%d + ",i);
        }
        printf("%d = %d\n",a,sum);
        
    }
    return 0;
}