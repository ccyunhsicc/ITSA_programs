#include<stdio.h>
#include<string.h>

int main(){
    double arr[10];
    double sum=0.0;
    int n=0;
    while(scanf(" %lf",&arr[n])!=EOF){
        sum+=arr[n]*arr[n];
        //printf("%.6lf\n",sum);
        n++;
    }
    printf("%.6lf\n",sum);
    return 0;
}