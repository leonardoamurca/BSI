//LEONARDO AGUILAR MURCA
#include <iostream>


using namespace std;

void insertionSort(int *vetor, int inicio, int fim) {
  int aux, j;
  for(int i = (fim-2); i >= inicio; i--) {
    aux = vetor[i];
    j = i + 1;
    while(j < fim && vetor[j] < aux) {
      vetor[j-1] = vetor[j];
      j++;
    }
    vetor[j-1] = aux;
  }
}

void combinar(int *vetor, int inicio, int metade, int fim, int &passos) {
  int *vE, *vD;
  vE = new int[metade-inicio+1];
  vD = new int[fim-metade];

   for(int i = 0; i < (metade-inicio+1); i++) {
     vE[i] = vetor[inicio+i];
   }
   for(int i = 0; i < (fim-metade); i++) {
     vD[i] = vetor[metade+1+i];
   }
  int iE = 0, iD = 0, iV = inicio;
  while(iE < (metade-inicio+1) && (iD < (fim-metade))) {

    if(vE[iE] < vD[iD]) {
      vetor[iV] = vE[iE];
      iE++;
    } else {
      vetor[iV] = vD[iD];
      iD++;
    }

    iV++;
  }
  while(iE < (metade-inicio+1)) {
    vetor[iV] = vE[iE];
    iE++;
    iV++;
  }
  while(iD < (fim-metade)) {
    vetor[iV] = vD[iD];
    iD++;
    iV++;
  }
  delete vD;
  delete vE;
}

void mergeInsSort(int *vetor, int inicio, int fim, int &passos, int k)
{
  if(inicio < fim) {
    int metade;
    passos++;
    metade = ((fim-inicio)/2)+inicio;
    if( (fim-inicio+1) <= k) {
      insertionSort(vetor, inicio, fim);
    } else {
    
    //cout << "Metade: " << metade << endl;
    mergeInsSort(vetor, inicio, metade, passos, k);
    passos++;
    
    mergeInsSort(vetor, metade+1, fim, passos, k);
    passos++;
   
    combinar(vetor, inicio, metade, fim, passos);
    passos++;
    }
    combinar(vetor, inicio, metade, fim, passos);
    passos++;
  }
}


int main()
{
  int qtde, k;
  cout << "MERGEINSORT" << endl;

  cout << "Digite a quantidade de elementos: " << endl;
  cin >> qtde;

  int *vetor = new int[qtde];

  cout << "Digite os elementos do vetor: ";
  for(int i = 0; i < qtde; i++) {
    cin >> vetor[i];
  }
  cout << endl;

  cout << "Digite o valor de k para definir onde começar o Insertion Sort: " << endl;
  cin >> k;

  

  //Imprime vetor gerado
  cout << endl << "Vetor Original: [";
  for (int i = 0; i < qtde; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;

  //Invoca funcao para mergeInsSort vetor
  cout << "Ordenando... " << endl;
  int passos = 0;
  mergeInsSort(vetor, 0, qtde-1, passos, k);

  cout << passos << " passos." << endl << endl;

  //Imprime vetor ordenado
  cout << "Vetor ordenado" << endl << "[";
  for (int i = 0; i < qtde; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;

  return 0;
}
