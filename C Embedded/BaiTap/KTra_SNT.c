#include <stdio.h>
#include <stdbool.h>

bool Check(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    scanf("%d", &N);
    if(Check(N)){
        printf("%d là số nguyên tố\n", N);
    }else{
         printf("%d không là số nguyên tố\n", N);
    }
}