#include <stdio.h>

int Find(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ucln=Find(a,b);
    printf("%d\n",ucln);
}