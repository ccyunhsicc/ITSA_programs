#include<stdio.h>
#include<math.h>

int main(){
    int a;
    while(scanf(" %d",&a)!=EOF){
        int d,h,m,s;
        s=a%60;
        a=a/60;
        m=a%60;
        a=a/60;
        h=a%24;
        a=a/24;
        d=a;
        printf("%d days\n",d);
        printf("%d hours\n",h);
        printf("%d minutes\n",m);
        printf("%d seconds\n",s);
    }
    
    
    return 0;
}