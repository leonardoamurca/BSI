
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#define N 500+5
#define M 500+5

using namespace std;

int main(){
    int matriz[N][M];
    int v[N],n,m;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=m; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 1; i<=n; i++){
        v[i] = m + i;
    }

    for(int i = 1; i<=n; i++){
        for(int j = m; j >= 1; j--){
            if(matriz[i][j] != 0){
                v[i] = j;
            }
        }
    }

    bool crescente = true;

    for(int i = 1; i < n; i++){
        if(v[i] >= v[i+1]){
            crescente = false;
        }
    }
    if(crescente == true){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
    system("PAUSE");
}
