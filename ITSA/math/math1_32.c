#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        if(a==153 || a==370 ||a==371||a==407){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}