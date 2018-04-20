/*
Leonardo Aguilar
Imprime caracteres da tabela ASCII de 32 � 255
Sa�da: media
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>

using namespace std;

int main(){
    //Inclus�o dos caracteres especiais
    setlocale(LC_ALL,"Portuguese");

    //Declara��o das vari�veis
    cout << "\t     TABELA ASCII" << endl;
    cout << "Simbolo" << "      " << "Hexadecimal" << "     " << "Decimal" << "     " << endl;
    for(int i = 32; i <= 255; i++){
        cout << "   " << (unsigned char)i << "             " << hex << i <<  "            " << dec << i << endl;
    }

return 0;
system("PAUSE");
}
