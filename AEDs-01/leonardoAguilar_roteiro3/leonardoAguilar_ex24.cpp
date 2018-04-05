/*
Leonardo Aguilar
Verifica se um retângulo é um retângulo de ouro dado o valor de seus lados
Entrada: Lados do retângulo
Saída: Retângulo de ouro, Não é retângulo de ouro
*/


#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>


using namespace std;

int main(){


	//Inclusão de caracteres especiais
	setlocale(LC_ALL, "Portuguese");

	//Declaração das variáveis
    float a, b, x = 1.618;

	//Entrada de dados pelo usuário
    cout << "Digite os lados a e b de um retângulo, respectivamente: " << endl;
    cin >> a >> b;
    
    //Condições para ser retângulo de ouro
   if(a > b){
       if((a/b) == x){
           cout << "Retâgulo de ouro!" << endl;
       }
       else {
           cout << "Não é retângulo de ouro!" << endl;
       }
   }
   else{
       if((b/a) == x){
           cout << "Retâgulo de ouro!" << endl;
       }
       else {
           cout << "Não é retângulo de ouro!" << endl;
       }
   }
   
return 0;
system("PAUSE");
}
