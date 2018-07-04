/*LEONARDO AGUILAR MURCA*/

#include <iostream>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <string.h>

using namespace std;

const int LINHA = 3, COLUNA = 2;

void cadastrarConta(float conta[LINHA][COLUNA], int &qtdContas); // Assinatura da subrotina
bool achouConta(float conta[LINHA][COLUNA], int qtdContas, int codigo);
void imprimirContas(float conta[LINHA][COLUNA], int qtdContas );
void imprimirEspecifica(float conta[LINHA][COLUNA], int especifica);
void sacar(float conta[LINHA][COLUNA], float valSaque);
void menu();

int main(){

    //Inclusão de caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    int opc, qtdContas = 0, especifica = 0;
    float conta[LINHA][COLUNA], deposito, valSaque = 0;

    do{
    menu();
    cin >> opc;
    system("CLS"); // Limpa a tela do DOS

    switch(opc){
        case 1: cadastrarConta(conta, qtdContas);
        cout << "Contas cadastradas " << qtdContas << endl;
        break;

        case 2: imprimirContas(conta, qtdContas);
        system("PAUSE");
        break;

        case 3: imprimirEspecifica(conta, especifica);
        system("PAUSE");
        break;

        case 4: sacar(conta, valSaque);


    }
    }while(opc != 6);

return 0;
system("PAUSE");
}

void cadastrarConta(float conta[LINHA][COLUNA], int &qtdContas){
    int codigo;
    bool achou;
    cout << "Digite o codigo da conta a ser cadastrada: " << endl;
    cin >> codigo;
    achou = achouConta(conta, qtdContas, codigo);
    if(achou == false){
        conta[qtdContas][0] = codigo;
        conta[qtdContas][1] = 100;
        qtdContas++;
        cout << "CONTA CADASTRADA COM SUCESSO! " << endl;
    }
    else{
        cout << "Esta conta já existe! " << endl;
    }
    system("PAUSE");
    system("cls");
}

bool achouConta(float conta[LINHA][COLUNA], int qtdContas, int codigo){
    for(int i = 0; i < qtdContas; i++){
        if(conta[i][0] == codigo){
            return true;
        }
    }
    return false;
}

void menu(){
    cout << "===========MENU============" << endl;
    cout << "1. Cadastrar nova conta" << endl;
    cout << "2. Imprimir contas cadastradas" << endl;
    cout << "3. Imprimir saldo de conta específica" << endl;
    cout << "4. Sacar da conta " << endl;
    cout << "5. Depositar em conta " << endl;
    cout << "6. Sair " << endl;
}

void imprimirContas(float conta[LINHA][COLUNA], int qtdContas ){

        cout << "CONTAS CADASTRADAS! " << endl;
        cout << "Conta   Saldo" << endl;
        for(int i = 0; i < qtdContas; i++){
            cout << conta[i][0] << "       " << conta[i][1] << endl;
        }
}

void imprimirEspecifica(float conta[LINHA][COLUNA], int especifica){
    int cont = 0;
    cout << "Digite o numero da conta que deseja saber o saldo: " << endl;
    cin >> especifica;

    for(int i = 0; i < LINHA; i++){
        if(especifica == conta[i][0]){
            cout << "Saldo da conta " << especifica << " = " << conta[i][1] << endl;
        }
        else{
            cont++;
        }
    }
    if(cont > (LINHA-1) ){
        cout << "Esta conta não existe! " << endl;
    }
}

void sacar(float conta[LINHA][COLUNA], float valSaque){
    int codigo, insu = 0;
    cout << "Digite o codigo da conta que deseja sacar: " << endl;
    cin >> codigo;

    for(int i = 0; i < LINHA; i++){
        if(codigo == conta[i][0]){
            if(conta[i][1] > 0){
                cout << "Digite o valor a ser sacado: " << endl;
                cin >> valSaque;
                if(valSaque < conta[i][1]){
                    conta[i][1] -= valSaque;
                    cout << "SAQUE REALIZADO COM SUCESSO!" << endl;
                }
                else{
                    insu++;
                }
            }
            else{
                insu++;
            }
        }
    }
    if(insu > 0){
        cout << "Saldo insuficiente! " << endl;
    }

}
