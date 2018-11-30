#include <iostream>
#include "arvore.h"

using namespace std;

void Arvore::inicializar()
{
    raiz = NULL;
}

No* Arvore::inserirNovo(No* novo, No* raiz_atual)
{
    if(raiz_atual == NULL){
        return novo;
    }
    if( (raiz_atual->valor) > novo->valor) {
        raiz_atual->esquerda = inserirNovo(novo, raiz_atual->esquerda);
    } else {
        raiz_atual->direita = inserirNovo(novo, raiz_atual->direita);
    }
    return raiz_atual;
}

void Arvore::inserir(int valor)
{
    No* novo = new No();
    novo->inicializarNo(valor);
    raiz = inserirNovo(novo, raiz);
}

void Arvore::preOrdem(No* elemento)
{
    if(elemento != NULL) {
        cout << elemento->valor << endl; //R
        preOrdem(elemento->esquerda);//E
        preOrdem(elemento->direita);//D
    }
}

void Arvore::posOrdem(No* elemento)
{
    if(elemento != NULL) {
        //cout << elemento->valor << endl;
        posOrdem(elemento->esquerda); //E
        posOrdem(elemento->direita); //D
        cout << elemento->valor << endl; //R
    }
}

void Arvore::emOrdem(No* elemento)
{
    if(elemento != NULL) {
        emOrdem(elemento->esquerda); //E
        emOrdem(elemento->direita); //R
        cout << elemento->valor << endl; //D
    }
}
