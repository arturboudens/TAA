#include <stdio.h>

int main(){
    long long n = 0;

    scanf("%lld", &n);

    while(1){
        printf("%lld", n);

        if(n == 1){
            break;
        }

        printf(" ");

        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
    }
    
    return 0;
}