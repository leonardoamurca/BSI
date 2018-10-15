//LEONARDO AGUILAR MURÇA
#include <iostream>
#include <string.h>
#include "pilha.cpp"

using namespace std;

Pilha inverter(Pilha *pilhaTexto);
bool palindromo(Pilha *pilhaTexto, string texto);
bool transferirElementos(Pilha *pilhaTexto, Pilha *pilhaTextoCopia);
int iguais(Pilha *pilhaTexto, Pilha *pilhaTexto2, string texto, string texto2);

int main() {

    //Inicializa pilha original do texto inicial
    Pilha pilhaTexto;
    pilhaTexto.inicializar();

    //Entrada de dados pelo usuario
    string texto;
    cout << "Digite seu texto: " << endl;
    getline(cin, texto);

    //Aloca dinamicamente o texto digitado pelo usuario e o transforma em char
    char *text = new char[texto.length() + 1];
    memcpy(text, texto.c_str(), texto.length() + 1);

    //Preenche a pilha original
    for(int i = 0; i < texto.length(); i++) {
        pilhaTexto.empilhar(text[i]);
    }

    //Imprime cadeia de caracteres da pilha original
    cout << "Cadeia original = ";
    pilhaTexto.imprimir();
    cout << endl;

    //Invoca função que inverte cadeia de caracteres
    inverter(&pilhaTexto);

    //Imprime pilha original invertida
    cout << "Cadeia invertida = ";
    pilhaTexto.imprimir();
    cout << endl;

    //Verifica se o conteudo digitado eh palindromo
    if(palindromo(&pilhaTexto, texto)) {
        cout << "Palindromo! " << endl;
    } else {
        cout << "Nao palindromo! " << endl;
    }

    //Inicializa pilha que sera a copia da pilhaTexto
    Pilha pilhaTextoCopia;
    pilhaTextoCopia.inicializar();

    //Transfere elementos da pilhaTexto para a pilhaTextoCopia se a primeira for nao vazia!
    if(transferirElementos(&pilhaTexto, &pilhaTextoCopia)) {
        cout << "Copia realizada com sucesso!" << endl;

        //Imprime a cadeia copiada
        cout << "Cadeia copia = ";
        pilhaTextoCopia.imprimir();
        cout << endl;
    } else {
        cout << "ERRO AO COPIAR! (PILHA VAZIA)" << endl;
    }

    //Inicializa pilha 2 a ser comparada
    Pilha pilhaTexto2;
    pilhaTexto2.inicializar();

    //Entrada de dados pelo usuario NOVAMENTE
    string texto2;
    cout << "Digite seu texto 2: " << endl;
    getline(cin, texto2);

    //Aloca dinamicamente o texto digitado pelo usuario e o transforma em char
    char *text2 = new char[texto2.length() + 1];
    memcpy(text2, texto2.c_str(), texto2.length() + 1);

    //Preenche a pilha original
    for(int i = 0; i < texto2.length(); i++) {
        pilhaTexto2.empilhar(text2[i]);
    }

    if (iguais(&pilhaTexto, &pilhaTexto2, texto, texto2) ) {
        cout << "Pilhas iguais! " << endl;
    } else { cout << "Pilhas diferentes!" << endl; }


return 0;
}

Pilha inverter(Pilha *pilhaTexto) {

    //Inicializa pilha Auxiliar 01
    Pilha pilhaAux1;
    pilhaAux1.inicializar();

    //Inicializa pilha Auxiliar 02
    Pilha pilhaAux2;
    pilhaAux2.inicializar();

    //Desempilha Pilha Original e Empilha na Pilha Auxiliar 01
    while(!pilhaTexto->vazia()) {
        pilhaAux1.empilhar( (pilhaTexto->topo)->valor );
        pilhaTexto->desempilhar();
    }

    //Desempilha Pilha Auxiliar 01 e Empilha na Pilha Auxiliar 02
    while(!pilhaAux1.vazia()) {
        pilhaAux2.empilhar(pilhaAux1.topo->valor);
        pilhaAux1.desempilhar();
    }

    //Desempilha Pilha Auxiliar 02 e Empilha na Pilha Original
    while(!pilhaAux2.vazia()) {
        pilhaTexto->empilhar(pilhaAux2.topo->valor);
        pilhaAux2.desempilhar();
    }
    return *pilhaTexto;
}

bool palindromo(Pilha *pilhaTexto, string texto) {

    //Inicializa pilha Auxiliar 01
    Pilha pAux1;
    pAux1.inicializar();

    //Desinverte a pilha invertida pela funcao inverter() anteriormente
    inverter(pilhaTexto);

    //Empilha blocos da pilhaTexto na pilha pAux1
    Bloco *aux1 = pilhaTexto->topo;
    while(aux1 != NULL) {
        pAux1.empilhar(aux1->valor);
        aux1 = aux1->prox;
    }

    //Contador para a verficacao se palindromo
    int i = 0;

    //Percorre a pilhaTexto e pAux1 e compara cada elemento
    Bloco *aux2 = pAux1.topo;
    Bloco *aux3 = pilhaTexto->topo;
    while(aux2 != NULL) {
        if(aux2->valor == aux3->valor) {
            i++;
        }
        aux2 = aux2->prox;
        aux3 = aux3->prox;
    }

    //Verifica o contador de elementos iguais
    if(i == texto.length()) {
        return true;
    } else { return false;}
}

bool transferirElementos(Pilha *pilhaTexto, Pilha *pilhaTextoCopia) {

    if(pilhaTexto->vazia()) { return false; }
    else {
        //Inicializa pilha Auxiliar
        Pilha pilhaAux;
        pilhaAux.inicializar();

        //pilhaTexto->imprimir();

        //Empilha elementos da pilhaTexto na Pilha Auxiliar
        Bloco *aux1 = pilhaTexto->topo;
        while(aux1 != NULL) {
            pilhaAux.empilhar(aux1->valor);
            aux1 = aux1->prox;
        }
        //pilhaAux.imprimir();

        //Desempilha pilhaAux e empilha na pilhaTextoCopia
        while(!pilhaAux.vazia()) {
            pilhaTextoCopia->empilhar(pilhaAux.topo->valor);
            pilhaAux.desempilhar();
        }
        //pilhaTexto->imprimir();
    return true;
    }

}

int iguais(Pilha *pilhaTexto, Pilha *pilhaTexto2, string texto, string texto2) {
    //Contador para o numero de elementos iguais
    int i = 0;

    //Compara elemento por elemento de ambas as pilhas
    Bloco *aux1 = pilhaTexto->topo;
    Bloco *aux2 = pilhaTexto2->topo;
    while(aux1 != NULL) {
        if(aux1->valor == aux2->valor) {
            i++;
        }
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }
    cout << i << endl;
    if(texto.length() == i && texto2.length() == i) {
        return 1;
    } else { return 0; }
}
