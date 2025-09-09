#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    scanf("%lld", &n);

    int *lista = (int*)malloc((n - 1) * sizeof(int));
    
    if(lista == NULL){
        printf("Erro ao alocar memoria.");
        return 1;
    }
    
    for(int i = 0; i < n - 1; i++){
        scanf("%d", &lista[i]);
    }

    //fórmula da soma da progressão aritmética
    long long soma_esperada = n * (n + 1) / 2;

    long long soma_real = 0;

    for (int i = 0; i < n -1; i++){
        soma_real += lista[i];
    }

    long long numero_faltante = soma_esperada - soma_real;
    
    printf("%lld\n", numero_faltante);

    free(lista);
    
    return 0;
}