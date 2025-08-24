#include <stdio.h>
int main (){

    int d; 

    while(scanf("%d", &d) == 1 && d != -1){

        char n[100001]; //n como texto por conta do numero maximo de digitos
        scanf(" %s", n);

        int soma = 0;

        for(int i = 0; i < d; i++){
            soma += n[i] - '0'; //converte texto em numero
        }

        if(soma % 3 == 0){
            printf("%d sim\n", soma);
        }
        else{
            printf("%d nao\n", soma);
        }
    }

    return 0;
}