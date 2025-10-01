#include <iostream>
#include <bits/stdc++.h>

int main(){

    int n = 0;

    while(scanf("%d", &n) == 1 && n != -1){
        int v[n];
        int solitario = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
            solitario = solitario ^ v[i]; // A ^ 0 = A, A ^ A = 0
        }

        printf("%d\n", solitario);
    }
    return 0;
}