#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        if(a%400==0 || (a%4==0 && a%100!=0)){
            printf("Bissextile Year\n");
        }else{
            printf("Common Year\n");
        }
        
    }
    return 0;
}