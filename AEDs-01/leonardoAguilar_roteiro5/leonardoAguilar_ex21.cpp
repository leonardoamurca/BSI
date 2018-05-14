/*
Leonardo Aguilar
Simula um controle banc�rio
Entrada: codigo da conta, saldo, deposito, saque, sair
Sa�da: saldo, conta nao encontrada, saldo insuficiente
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Vari�vel Global
const int TAM = 10;

int main(){

    //Inclus�o de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

   //Declara��o das vari�veis
   int cod[TAM], opc, codOpera;
   float sal[TAM], dep, saque;
   string naoEncontrada;

   //Entrada de dados
   for(int i = 0; i < TAM; i++){
    cout << "Conta " << i+1 << endl;
    cout << "Digite o c�digo: " << endl;
    cin >> cod[i];

    cout << "Digite o saldo: " << endl;
    cin >> sal[i];
   }
   //Loop das opera��es
   do{
       cout << "=====Menu de Opera��es=====" << endl;
       cout << "1. Efetuar dep�sito" << endl;
       cout << "2. Efetuar saque" << endl;
       cout << "3. Consultar saldo em conta" << endl;
       cout << "4. Finalizar o programa" << endl;
       cout << "Digite a opera��o desejada: " << endl;
       cin >> opc;

       switch(opc){
            //Dep�sito
            case 1:
            //Solicita��o do c�digo da conta para realizar a opera��o
            cout << "Digite o c�digo da conta que deseja efetuar o dep�sito: " << endl;
            cin >> codOpera;


            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Entrada do valor do dep�sito
                    cout << "Digite o valor a ser depositado: " << endl;
                    cin >> dep;
                    //Acrescenta o valor do dep�sito ao saldo da conta
                    sal[i] += dep;
                    cout << sal[i] << endl;
                    naoEncontrada = " ";
                    break;
                }
                else{
                    naoEncontrada = "Conta n�o encontrada!";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 2:
            //Solicita��o do c�digo da conta para realizar a opera��o
            cout << "Digite o c�digo da conta que deseja efetuar o saque: " << endl;
            cin >> codOpera;

            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Entrada do valor do saque
                    cout << "Digite o valor a ser sacado: " << endl;
                    cin >> saque;
                    //Verifica se o saldo � suficiente para o saque(Imposs�vel saldo ficar negativo)
                    if(saque <= sal[i]){
                        //Decrescenta o valor do saque ao saldo da conta
                        sal[i] -= saque;
                        cout << sal[i] << endl;
                    }
                    else{
                        cout << "Saldo insuficiente! " << endl;
                    }
                    naoEncontrada = " ";
                    break;
                }
                else{
                   naoEncontrada = "Conta n�o encontrada! ";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 3:
            //Solicita��o do c�digo da conta para realizar a opera��o
            cout << "Digite o c�digo da conta que deseja saber o saldo: " << endl;
            cin >> codOpera;

            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Imprime o saldo da conta solicitada na tela
                    cout << "Seu saldo � de R$" << sal[i] << ",00" << endl;
                    naoEncontrada = " ";
                    break;
                }
                else{
                    naoEncontrada = "Conta n�o encontrada!";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 4:
            return EXIT_SUCCESS;
            break;

            default:
            cout << "Opera��o inv�lida! " << endl;
            break;
       }

   }while(opc != 4);
return 0;
system("PAUSE");
}
