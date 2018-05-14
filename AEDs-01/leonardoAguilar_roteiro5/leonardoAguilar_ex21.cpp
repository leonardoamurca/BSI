/*
Leonardo Aguilar
Simula um controle bancário
Entrada: codigo da conta, saldo, deposito, saque, sair
Saída: saldo, conta nao encontrada, saldo insuficiente
*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

//Variável Global
const int TAM = 10;

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

   //Declaração das variáveis
   int cod[TAM], opc, codOpera;
   float sal[TAM], dep, saque;
   string naoEncontrada;

   //Entrada de dados
   for(int i = 0; i < TAM; i++){
    cout << "Conta " << i+1 << endl;
    cout << "Digite o código: " << endl;
    cin >> cod[i];

    cout << "Digite o saldo: " << endl;
    cin >> sal[i];
   }
   //Loop das operações
   do{
       cout << "=====Menu de Operações=====" << endl;
       cout << "1. Efetuar depósito" << endl;
       cout << "2. Efetuar saque" << endl;
       cout << "3. Consultar saldo em conta" << endl;
       cout << "4. Finalizar o programa" << endl;
       cout << "Digite a operação desejada: " << endl;
       cin >> opc;

       switch(opc){
            //Depósito
            case 1:
            //Solicitação do código da conta para realizar a operação
            cout << "Digite o código da conta que deseja efetuar o depósito: " << endl;
            cin >> codOpera;


            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Entrada do valor do depósito
                    cout << "Digite o valor a ser depositado: " << endl;
                    cin >> dep;
                    //Acrescenta o valor do depósito ao saldo da conta
                    sal[i] += dep;
                    cout << sal[i] << endl;
                    naoEncontrada = " ";
                    break;
                }
                else{
                    naoEncontrada = "Conta não encontrada!";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 2:
            //Solicitação do código da conta para realizar a operação
            cout << "Digite o código da conta que deseja efetuar o saque: " << endl;
            cin >> codOpera;

            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Entrada do valor do saque
                    cout << "Digite o valor a ser sacado: " << endl;
                    cin >> saque;
                    //Verifica se o saldo é suficiente para o saque(Impossível saldo ficar negativo)
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
                   naoEncontrada = "Conta não encontrada! ";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 3:
            //Solicitação do código da conta para realizar a operação
            cout << "Digite o código da conta que deseja saber o saldo: " << endl;
            cin >> codOpera;

            for(int i = 0; i < TAM; i++){
                //Verifica se a conta solicitada existe
                if(codOpera == cod[i]){
                    //Imprime o saldo da conta solicitada na tela
                    cout << "Seu saldo é de R$" << sal[i] << ",00" << endl;
                    naoEncontrada = " ";
                    break;
                }
                else{
                    naoEncontrada = "Conta não encontrada!";
                }
            }
            cout << naoEncontrada << endl;
            break;

            case 4:
            return EXIT_SUCCESS;
            break;

            default:
            cout << "Operação inválida! " << endl;
            break;
       }

   }while(opc != 4);
return 0;
system("PAUSE");
}
