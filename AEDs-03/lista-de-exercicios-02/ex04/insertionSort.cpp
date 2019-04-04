#include <iostream>

using namespace std;

void insertionSort(int vetor[], int n) {
  int aux, j;
  for(int i = (n-2); i >= 0; i--) {
    aux = vetor[i];
    j = i + 1;
    while(j < n && vetor[j] < aux) {
      vetor[j-1] = vetor[j];
      j++;
    }
    vetor[j-1] = aux;
  }
}


int main() {
  int n;

  cout << "Digite o tamanho do vetor: " << endl;
  cin >> n;

  int *vetor = new int[n];

  cout << "Preencha o vetor com " << n << " elementos:" << endl;
  for(int i = 0; i < n; i++) {
    cin >> vetor[i];
  }

  insertionSort(vetor, n);

  cout << "Vetor ordenado: [ ";
  for(int i = 0; i < n; i++) {
    cout << vetor[i] << " ";
  }
  cout << "]" << endl;
  
  return 0;
}