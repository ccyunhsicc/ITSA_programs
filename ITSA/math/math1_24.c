#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    while(scanf(" %d",&a)!=EOF){
        scanf(" %d",&b);
        double sum=0;
        if(a<=60){
            sum=(double)a*(double)b;
        }else if(a>60&&a<=120){
            sum=60.0*(double)b;
            a=a-60;
            sum+=(double)a*(double)b*1.33;
        }else{
            sum=60.0*(double)b;
            sum+=60.0*(double)b*1.33;
            a=a-120;
            sum+=(double)a*(double)b*1.66;
        }
        printf("%.1lf\n",sum);
    }
    return 0;
}