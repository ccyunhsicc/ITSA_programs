#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    while(scanf(" %d",&a)!=EOF){
        scanf(" %d %d",&b,&c);
        if(a+b>c&&b+c>a&&a+c>b){
            printf("fit\n");
        }else{
            printf("unfit\n");
        }
        
    }
    return 0;
}