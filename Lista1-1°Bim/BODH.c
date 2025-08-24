#include <stdio.h>

int main()
{
    long long n = 0;
    int b = 0;

    while(scanf("%lld", &n) == 1 && scanf("%d", &b) == 1 && n != -1 && b != -1)
    {
        if(b != 2 && b != 8 && b != 10 && b != 16){
            return 0;
        }

        if(n == 0){
            printf("0\n");
            continue;
        }
        if(b == 10){
            printf("%lld\n", n);
            continue;
        }

        char conversao[100];
        int i = 0;

        while(n > 0){
            int resto = n % b;

            if(resto < 10){
                conversao[i] = resto + '0'; // poe o proprio numero na conversao
            }
            else{
                conversao[i] = (resto - 10) + 'A'; //poe a letra correspondente
            }
            i++;
            n = n / b; //tira o ultimo caracter para continuar o loop
        }

        for(int j = i - 1; j >= 0; j--){
            printf("%c", conversao[j]);
        }
        printf("\n");
    }
    return 0;
}