#include <stdio.h>

long long lambda(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (2*lambda(n - 1) + lambda(n - 2));
    }

}
int main(){
    int c = 0;
    int n;

    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        printf("%lld\n", lambda(n));
    }
    return 0;
}