/*LEONARDO AGUILAR MURCA*/
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

#define pi 3.14159265359666

using namespace std;


float radio(float x);
void fatorial();
void potencia(float x);


int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    float x;
    float resultado = 0;
    int num[100];
    cin >> x;

    //fatorial();
    //potencia(radio(x));

    for(int i = 0; i < 20; i++){
        resultado += potencia(radio(x)) / fatorial();
    }
    cout << resultado << endl;

    //radio(x); // Converte o angulo para radianos

system("PAUSE");
return 0;
}

//FUNÇÃO PARA CONVERTER X° PARA RADIANOS
float radio(float x){
    return (x*pi)/180;
}

//FUNÇÃO PARA CALCULAR O FATORIAL

void fatorial(){
    long double fat[20];
    long double num[20];
    for(int i = 0, j = 0; i < 20; i++, j+=2){
        num[i] = j;
    }

    for(int i = 0; i < 20; i++){
        fat[i] = 1;
    }

    for(int i = 0; i < 20; i++){
        if((num[i] == 1) or (num[i] == 0)){
           fat[i] = 1;
        }
        else{
            for(int j = num[i]; j > 0; j--){
                fat[i] *= j;
            }
        }
    }
}

void potencia(float x){
    long double num[20];
    long double pot[20];
    for(int i = 0, j = 0; i < 20; i++, j+=2){
        num[i] = j;
        pot[i] = 1;
    }

    for(int i = 0; i < 20; i++){
        if(i%2 == 0){
           pot[i] = pow(x, num[i]);
        }
        else{
            pot[i] = -pow(x, num[i]);
        }

    }


    for(int i = 0; i < 20; i++){
        cout << pot[i] << endl;
    }
}


