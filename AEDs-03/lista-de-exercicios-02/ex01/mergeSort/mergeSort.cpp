//LEONARDO AGUILAR MURCA
#include <iostream>


using namespace std;

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

void ordenar(int *vetor, int inicio, int fim, int &passos)
{
  //cout << "Inicio e fim: " << inicio << ", " << fim << endl;
  if(inicio < fim) {
    int metade;
    passos++;
    metade = ((fim-inicio)/2)+inicio;
    //cout << "Metade: " << metade << endl;
    ordenar(vetor, inicio, metade, passos);
    passos++;
    
    ordenar(vetor, metade+1, fim, passos);
    passos++;
   
    combinar(vetor, inicio, metade, fim, passos);
    passos++;
  
  }
}


int main()
{
  int qtde = 8;
  cout << "MERGE SORT" << endl;

  int vetor[qtde] = {3, 41, 52, 26, 38, 57, 9, 49};

  //Imprime vetor gerado
  cout << endl << "Vetor Original: [";
  for (int i = 0; i < qtde; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;

  //Invoca funcao para ordenar vetor
  cout << "Ordenando... " << endl;
  int passos = 0;
  ordenar(vetor, 0, qtde-1, passos);

  cout << passos << " passos." << endl << endl;

  //Imprime vetor ordenado
  cout << "Vetor ordenado" << endl << "[";
  for (int i = 0; i < qtde; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;

  return 0;
}
