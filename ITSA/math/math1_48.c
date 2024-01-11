#include<stdio.h>
#include<math.h>

int f(int x){
    if(x<=100){
        return f(f(x+11));
    }else{
        return (x-10);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        printf("%d\n",f(a));
    }
    return 0;
}