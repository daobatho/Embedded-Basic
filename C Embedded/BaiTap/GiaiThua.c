#include <stdio.h>

unsigned long long TinhGT(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*TinhGT(n-1);
    }
}
int main(){
    int N;
    scanf("%d", &N);
    if(N<0){
        printf("khong ton tai gia tri giai thua");
    }else{
        printf("%lld\n",TinhGT(N));
    }
}