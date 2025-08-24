#include <stdio.h>
#include <math.h>

int primo(int v){
    if(v == 2){
        return 1;
    }
    if(v <= 1 || v % 2 == 0){
        return 0;
    }
    
    //calcula o limite que havera a checagem, ja que calculando a raiz quadrada de um numero, podemos dividir esse numero por todos os primos ate a sua raiz, por exemplo, se a raiz for 10.6 confere-se o 3, 5 e 7.
    int lim = sqrt(v);

    for(int i = 3; i <= lim; i += 2){
        if(v % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n = 0;
    int v = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v);

        if(primo(v)){
            printf("o numero %d eh primo\n", v);
        }
        else{
            printf("o numero %d nao eh primo\n", v);
        }
    }
    return 0;
}