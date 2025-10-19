#include <bits/stdc++.h>

using namespace std;

struct No
{
    int valor;
    No* esquerda;
    No* direita;

    No(int v){
        valor = v;
        esquerda = nullptr;
        direita = nullptr;

    }
};

No* inserir(No* no, int valor){

    if(no == nullptr){
        return new No(valor);
    }

    if(no->valor > valor){
        no->esquerda = inserir(no->esquerda, valor);
    }
    else{
        no->direita = inserir(no->direita, valor);
    }
    return no;
}

void imprimirInfixa(No* no){
    if(no == nullptr) return;
    
    imprimirInfixa(no->esquerda);

    cout << no->valor << " ";

    imprimirInfixa(no->direita);
}

void imprimirPrefixa(No* no){
    if(no == nullptr) return;

    cout << no->valor << " ";

    imprimirPrefixa(no->esquerda);

    imprimirPrefixa(no->direita);
}

void imprimirPosfixa(No* no){
    if(no == nullptr) return;

    imprimirPosfixa(no->esquerda);

    imprimirPosfixa(no->direita);

    cout << no->valor << " ";
}
int main(){
    int n = 0; cin >> n;

    No* raiz = nullptr;

    for(int i = 0; i < n; i++){
        int v = 0;
        cin >> v;

        raiz = inserir(raiz, v);
    }

    cout << "In.: ";
    imprimirInfixa(raiz);
    cout << endl;

    cout << "Pre.: ";
    imprimirPrefixa(raiz);
    cout << endl;

    cout << "Pos.: ";
    imprimirPosfixa(raiz);
    cout << endl;


    return 0;

}