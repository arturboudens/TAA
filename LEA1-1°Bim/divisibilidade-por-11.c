#include <stdio.h>

int main(){
    int d = 0;

    while(scanf("%d", &d) == 1 && d != -1){

        char n[100001];
        scanf(" %s", n);

        int somaA = 0;
        int somaB = 0;

        for(int i = 0; i < d; i += 2){
            somaA += n[i] - '0';
        }

        for(int i = 1; i < d; i += 2){
            somaB += n[i] - '0';
        }

        int resto = somaA - somaB;

        if(resto % 11 == 0){
            printf("%s: %d - %d = %d - sim\n", n, somaA, somaB, resto);
        }
        else{
            printf("%s: %d - %d = %d - nao\n", n, somaA, somaB, resto);
        }
    }

    return 0;
}