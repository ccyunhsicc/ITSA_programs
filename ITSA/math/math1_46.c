#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a1,b1,a2,b2;
        char c;
        scanf(" %c %d %d %d %d",&c,&a1,&b1,&a2,&b2);
        if(c=='+'){
            printf("%d %d\n",a1+a2,b1+b2);
        }
        if(c=='-'){
            printf("%d %d\n",a1-a2,b1-b2);
        }
        if(c=='*'){
            printf("%d %d\n",a1*a2-b1*b2,a1*b2+a2*b1);
        }
    }
    return 0;
}