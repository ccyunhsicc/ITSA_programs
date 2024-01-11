#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d ",&n);
    while(n--){
        //setbuf(stdin,NULL);
        char A[260];
        scanf(" %s",A);
        int l=strlen(A);
        for(int i=l-1;i>=0;--i){
            printf("%c",A[i]);
        }
        printf("\n");
    }
}