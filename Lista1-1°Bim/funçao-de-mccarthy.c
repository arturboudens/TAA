#include <stdio.h>
int mccarthy(int n){

    if(n > 100){
        return n - 10;
    }
    else{
        return mccarthy(mccarthy(n + 11));
    }
}
int main(){
    int c = 0;
    long int n = 0;
    int mn;

    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%ld", &n);

        if(n <= 100){
            mn = 91;
        }
        else{
            mn = n - 10;
        }

        printf("%d\n", mccarthy(n));
    }

    return 0;
}