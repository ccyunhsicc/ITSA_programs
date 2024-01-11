#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        long long sum=1;
        if(a>31){
            printf("Value of more than 31\n");
        }else{
            printf("%lld\n",sum<<a);
        }
    }
    
    
    return 0;
}