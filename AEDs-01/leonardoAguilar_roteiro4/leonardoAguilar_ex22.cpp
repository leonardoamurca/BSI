/*
Leonardo Aguilar
Locomotiva A: S�o Paulo --> Curitiba com vel = 30m/s (t = 0)
Locomotiva B: Curitiba --> S�o Paulo com vel = 40m/s (t = 0)
Dist�ncia entre as cidade = 400Km
Dado dos dados acima, esse algoritmo calcula iterativamente o tempo necess�rio
para os maquinistas pararem as locomotivas antes que uma colis�o aconte�a. Calcula
tamb�m a dist�ncia que as locomotivas devem percorrer para que a colis�o aconte�a.
Entrada: N�o possui entrada
Sa�da: Tempo necess�rio para as locomotivas se colidir.
       Dist�ncia percorrida pelas locomotivas A e B para que a colis�o aconte�a

 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	//Inclus�o de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declara��o das vari�veis
	float A = 0, B = 400000, t = 0;

    while (A < B){
        A = A + 30;
        B = B - 40;
        t++;
    }

    cout << "S�o necess�rio " << t/3600 << " horas para se colidir " << endl;
    cout << "A locomotiva A dever� percorrer para que a colis�o aconte�a: " << A/1000 << " km" << endl;
    cout << "A locomotiva B dever� percorrer para que a colis�o aconte�a: " << (400000 - B)/1000 << " km" << endl;

return 0;
}
