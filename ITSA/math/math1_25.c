#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        int sum=0;
        for(int i=1;i<=a;++i){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}