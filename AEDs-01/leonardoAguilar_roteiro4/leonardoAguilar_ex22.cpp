/*
Leonardo Aguilar
Locomotiva A: São Paulo --> Curitiba com vel = 30m/s (t = 0)
Locomotiva B: Curitiba --> São Paulo com vel = 40m/s (t = 0)
Distância entre as cidade = 400Km
Dado dos dados acima, esse algoritmo calcula iterativamente o tempo necessário
para os maquinistas pararem as locomotivas antes que uma colisão aconteça. Calcula
também a distância que as locomotivas devem percorrer para que a colisão aconteça.
Entrada: Não possui entrada
Saída: Tempo necessário para as locomotivas se colidir.
       Distância percorrida pelas locomotivas A e B para que a colisão aconteça

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
	float A = 0, B = 400000, t = 0;

    while (A < B){
        A = A + 30;
        B = B - 40;
        t++;
    }

    cout << "São necessário " << t/3600 << " horas para se colidir " << endl;
    cout << "A locomotiva A deverá percorrer para que a colisão aconteça: " << A/1000 << " km" << endl;
    cout << "A locomotiva B deverá percorrer para que a colisão aconteça: " << (400000 - B)/1000 << " km" << endl;

return 0;
}
