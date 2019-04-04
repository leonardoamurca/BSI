#include <iostream>

using namespace std;

int forcaBruta(int a, int n) {
  int result = 1;
  for(int i = 1; i <= n; i++) {
    result *= a;
  }
  return result;
}

int decrementarEConquistar(int a, int n) {
  if(n == 0) {
    return 1;
  }
  
  return a * decrementarEConquistar(a, n-1);
}

int main() {
  int a, n;

  cout << "Digite a e n, respectivamente: " << endl;
  cin >> a >> n;

  cout << "Força bruta: " << forcaBruta(a, n) << endl;
  cout << "Decrementar e conquistar: " << decrementarEConquistar(a, n) << endl;
  return 0;
}