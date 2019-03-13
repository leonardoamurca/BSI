//VERSAO 01
// LEONARDO AGUILAR MURCA
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <iterator>

#define MAX 6

using namespace std;

//Asinaturas do procedimento e das funcoes
void ordenar(struct arrayWrapper vetor);
int ordenar1(float vetor[MAX]);
int ordenar2(float vetor[MAX]);
int ordenar3(float vetor[MAX]);


// Struct que empacota o vetor dentro desse tipo
struct arrayWrapper {
  float arr[MAX];
} array;


int main() {
  
  //Entrada dos dados
  cout << "Ordenador de sequencia" << endl
    << "=-=-=-=-=-=-=-=-=-=-=-" << endl
    << "Digite " << MAX << " numeros" << endl;

  for (int i = 0; i < MAX; i++) {
    cout << "Numero " << i << ": ";
    cin >> array.arr[i];
  }

  cout << endl << "Ordenando..." << endl;

  //Invoca o procedimento de ordenação
  ordenar(array);
  cout << " Pronto." << endl << endl;
  return 0;
}

void ordenar(struct arrayWrapper vetor) {
  float vetorCopia[MAX], vetorCopia2[MAX], vetorCopia3[MAX];

  //Realiza as copias do vetor
  copy(begin(vetor.arr), end(vetor.arr), begin(vetorCopia));
  copy(begin(vetor.arr), end(vetor.arr), begin(vetorCopia2));
  copy(begin(vetor.arr), end(vetor.arr), begin(vetorCopia3));

  //Imprime vetor copiado (TESTE)
  cout << "Vetor copiado: " << endl;
  for (int i = 0; i < MAX; i++) {
    cout << " " << vetorCopia[i];
  }
  cout << endl;
  
  
  int versao1, versao2, versao3;
  
  //Invoca os metodos de ordenacao
  versao1 = ordenar1(vetorCopia);
  versao2 = ordenar2(vetorCopia2);
  versao3 = ordenar3(vetorCopia3);
  
  //Imprime a quantidade de passos de cada metodo de ordenacao
  cout << "Versao 1: " << versao1 << " passos" << endl;
  cout << "Versao 2: " << versao2 << " passos" << endl;
  cout << "Versao 3: " << versao3 << " passos" << endl;
}

int ordenar1(float vetor[MAX]) {
  int cont=0;
  float aux;
  // Percorre todo o vetor
  for(int i = 0; i < MAX ; i++) {
    cont = cont +1;
    for(int j = 1; j < MAX; j++) {
      cont = cont +1;
      if(vetor[j-1] > vetor[j]){
        cont = cont +1;
        aux = vetor[j];
        vetor[j] = vetor[j-1];
        vetor[j-1] = aux;
      }
    }
  }

  //Imprime vetor ordenado atraves do metodo 1
  cout << "Ordenar1: [ ";
  for (int i = 0; i < MAX; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;
     
  return cont;
}

int ordenar2(float vetor[MAX]) {
  int cont=0;
  float aux;
  // Percorre todo o vetor
  for(int i = 0; i < MAX ; i++) {
    cont = cont +1;
    for(int j = 1; j < MAX-i; j++) {
      cont = cont +1;
      if(vetor[j-1] > vetor[j]){
        cont = cont +1;
        aux = vetor[j];
        vetor[j] = vetor[j-1];
        vetor[j-1] = aux;
      }
    }
  }

  //Imprime vetor ordenado atraves do metodo 1
  cout << "Ordenar2: [ ";
  for (int i = 0; i < MAX; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;
     
  return cont;
}

int ordenar3(float vetor[MAX]) {
  bool troca = true;
  int cont = 0;
  float aux;
  // Percorre todo o vetor
  for(int i = 0; i < MAX ; i++) {
    cont = cont +1;
    troca = false;
    for(int j = 1; j < MAX-i; j++) {
      cont = cont +1;
      // realiza a troca
      if(vetor[j-1] > vetor[j]){
        cont = cont +1;
        aux = vetor[j];
        vetor[j] = vetor[j-1];
        vetor[j-1] = aux;
        troca = true;   
      }
    }
    if(!troca) break;
  }

  //Imprime vetor ordenado atraves do metodo 3
  cout << "Ordenar3: [ ";
  for (int i = 0; i < MAX; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;
  
  return cont;
}





//===================================================================================================================

//VERSAO 02
// LEONARDO AGUILAR MURCA
// #include <iostream>
// #include <stdio.h>

// #define MAX 6

// using namespace std;

// void ordenar(float vetor[MAX]);
// int ordenar1(float vetor[MAX]);
// int ordenar2(float vetor[MAX]);
// int ordenar3(float vetor[MAX]);


// int main() {
//   float numeros[MAX];
  
//   cout << "Ordenador de sequencia" << endl
//     << "=-=-=-=-=-=-=-=-=-=-=-" << endl
//     << "Digite " << MAX << " numeros" << endl;

//   for (int i = 0; i < MAX; i++) {
//     cout << "Numero " << i << ": ";
//     cin >> numeros[i];
//   }

//   cout << endl << "Ordenando..." << endl;
//   ordenar(numeros);
//   cout << " Pronto." << endl << endl;
//   return 0;
// }

// void ordenar(float vetor[MAX]) {
//   // Copia vetor original para vetores auxiliares
//   float vetorCopia[MAX], vetorCopia2[MAX], vetorCopia3[MAX];
//   for(int i = 0; i < MAX; i++) {
//     vetorCopia[i] = vetor[i];
//     vetorCopia2[i] = vetor[i];
//     vetorCopia3[i] = vetor[i];
//   }
  
//   //Invoca os metodos de ordenacao
//   int versao1, versao2, versao3;
//   versao1 = ordenar1(vetorCopia);
//   versao2 = ordenar2(vetorCopia2);
//   versao3 = ordenar3(vetorCopia3);
  
//   //Imprime a quantidade de passos de cada metodo de ordenacao
//   cout << "Versao 1: " << versao1 << " passos" << endl;
//   cout << "Versao 2: " << versao2 << " passos" << endl;
//   cout << "Versao 3: " << versao3 << " passos" << endl;
// }

// int ordenar1(float vetor[MAX]) {
//   int cont=0;
//   float aux;
//   // Percorre todo o vetor
//   for(int i = 0; i < MAX ; i++) {
//     cont = cont +1;
//     for(int j = 1; j < MAX; j++) {
//       cont = cont +1;
//       if(vetor[j-1] > vetor[j]){
//         cont = cont +1;
//         aux = vetor[j];
//         vetor[j] = vetor[j-1];
//         vetor[j-1] = aux;
//       }
//     }
//   }

//   //Imprime vetor ordenado atraves do metodo 1
//   cout << "Ordenar1: [ ";
//   for (int i = 0; i < MAX; i++) {
//     cout << vetor[i] << " ";
//   }
//   cout << "]" << endl;
     
//   return cont;
// }

// int ordenar2(float vetor[MAX]) {
//   int cont=0;
//   float aux;
//   // Percorre todo o vetor
//   for(int i = 0; i < MAX ; i++) {
//     cont = cont +1;
//     for(int j = 1; j < MAX-i; j++) {
//       cont = cont +1;
//       if(vetor[j-1] > vetor[j]){
//         cont = cont +1;
//         aux = vetor[j];
//         vetor[j] = vetor[j-1];
//         vetor[j-1] = aux;
//       }
//     }
//   }

//   //Imprime vetor ordenado atraves do metodo 1
//   cout << "Ordenar2: [ ";
//   for (int i = 0; i < MAX; i++) {
//     cout << vetor[i] << " ";
//   }
//   cout << "]" << endl;
     
//   return cont;
// }

// int ordenar3(float vetor[MAX]) {
//   bool troca = true;
//   int cont = 0;
//   float aux;
//   // Percorre todo o vetor
//   for(int i = 0; i < MAX ; i++) {
//     cont = cont +1;
//     troca = false;
//     for(int j = 1; j < MAX-i; j++) {
//       cont = cont +1;
//       // realiza a troca
//       if(vetor[j-1] > vetor[j]){
//         cont = cont +1;
//         aux = vetor[j];
//         vetor[j] = vetor[j-1];
//         vetor[j-1] = aux;
//         troca = true;   
//       }
//     }
//     if(!troca) break;
//   }

//   //Imprime vetor ordenado atraves do metodo 3
//   cout << "Ordenar3: [ ";
//   for (int i = 0; i < MAX; i++) {
//     cout << vetor[i] << " ";
//   }
//   cout << "]" << endl;
  
//   return cont;
// }
