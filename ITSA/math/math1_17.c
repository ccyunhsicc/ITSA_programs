#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
    int temp;
    if(a<b){
        gcd(b,a);
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    while(scanf(" %d",&a)!=EOF){
        scanf(" %d",&b);
        printf("%d\n",gcd(a,b));
    }
    return 0;
}