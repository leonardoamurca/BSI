#include <iostream>
#include<bits/stdc++.h> 

using namespace std;

int getNextGap(int gap) {
  gap = (gap*10)/13;

  if(gap < 1) {
    return 1;
  }
  return gap;
}

void combSort(int *vetor, int n) {
  int gap = n;

  bool troca = true;

  while(gap != 1 || troca == true) {
    gap = getNextGap(gap);
    troca = false;
    for(int i = 0; i < n-gap; i++) {
      if(vetor[i] > vetor[i+gap]) {
        swap(vetor[i], vetor[i+gap]);
        for(int i = 0; i < n; i++) {
          cout << vetor[i] << " ";
        }
        troca = true;
      }
    }
  }
}


int main() {
  int n = 8;
  cout << "COMB SORT" << endl;

  int vetor[n] = {3, 41, 52, 26, 38, 57, 9, 49};

  cout << "Array original: ["; 
    for (int i=0; i<n; i++) {
      cout << vetor[i] << " ";
    } 
    cout << "]" << endl; 
  
  
    combSort(vetor, n); 
  
    cout << "Array ordenado: ["; 
    for (int i=0; i<n; i++) {
      cout << vetor[i] << " ";
    } 
    cout << "]" << endl;  
  return 0;
}