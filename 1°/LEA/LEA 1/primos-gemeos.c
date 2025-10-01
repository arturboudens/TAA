#include <stdio.h>
#include <math.h>

int primogemeo(int v){
    if(v < 2){
        return 0;
    }
    if(v == 2){
        return 1;
    }
    if(v % 2 == 0){
        return 0;
    }

    int lim1 = sqrt(v);

    for(int i = 3; i <= lim1; i += 2){
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
    
        if(primogemeo(v) && (primogemeo(v + 2) || primogemeo(v - 2))){
            printf("O numero %d eh um primo gemeo\n", v);
        }
        else{
            printf("O numero %d nao eh um primo gemeo\n", v);
        }
    }

    return 0;
}