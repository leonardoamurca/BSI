#include <iostream>
#include <math.h>

using namespace std;

void somaBinaria(int *A, int *B, int *C, int n) {
  int temp = 0;;
  for(int i = n; i >= 0; i--) {
    temp = A[i] + B[i] + C[i];
    if(temp < 2) {
      C[i] = temp;
    } else if(temp == 2) {
      C[i] = 0;
      C[i-1] = 1;
    } else {
      C[i] = 1;
      C[i-1] = 1;
    }    
  }
}


int main() {
  int n;

  cout << "Digite a quantidade de bits dos números a serem somados: " << endl;
  cin >> n;

  int *A = new int[n];
  int *B = new int[n];
  int *C = new int[n+1];

  cout << "Digite os " << n << " bits de A: " << endl;
  for(int i = 1; i <= n; i++) {
    cin >> A[i];
  }

  cout << "Digite os " << n << " bits de B: " << endl;
  for(int i = 1; i <= n; i++) {
    cin >> B[i];
  }

  for(int i = 0; i <= n; i++) {
    C[i] = 0;
  }

  somaBinaria(A, B, C, n);

  for(int i = 0; i <= n; i++) {
    cout << C[i] << " ";
  }

  return 0;
}
