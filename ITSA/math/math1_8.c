#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    while(scanf(" %d",&a)!=EOF){
        scanf(" %d",&b);
        int sum=a+b;
        printf("%d\n",sum*sum);
    }
    
    
    return 0;
}