#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    while(scanf(" %d",&a)!=EOF){
        scanf(" %d",&b);
        int sum=(a+b)*(b-a+1)/2;
        printf("%d\n",sum);
        
    }
    return 0;
}