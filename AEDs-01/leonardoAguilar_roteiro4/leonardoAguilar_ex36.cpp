/*
Leonardo Aguilar
Verifica se o cpf � v�lido ou n�o
Entrada: 9 d�gitos do cpf, 2 d�gito verificadores
Sa�da: CPF V�lido, CPF n�o v�lida
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //Declara��o das vari�veis
    long long cpf, dv, v1=0, v2=0, i=0, dig;

    //Entrada de dados
    cout<<"Digite os 9 primeiros digitos do seu CPF: "<<endl;
    cin>>cpf;

    cout<<"Digite os 2 digitos verificadores do seu CPF: "<<endl;
    cin>>dv;

    cout << "CPF = "<<cpf<<endl;

    //Looping dos c�lculos do 9 primeiros d�gitos
    for(int d = 0; d < 9; d++){
        dig = cpf%10;
        cpf /= 10;
        v1 += dig*(9 - (i%10) );
        i++;
        v2 += dig*(9 - (i%10));
    }

    //C�lculo dos d�gitos verificadores
    v1 = (v1%11)%10;
    v2 = ((v2 + v1*9)%11)%10;

    //Sa�da de dados
    cout<<"V1 = "<<v1<<endl;
    cout<<"V2 = "<<v2<<endl;

    if(dv == v1*10 + v2){
        cout<<"CPF valido!";
    }
    else{
        cout<<"CPF invalido!";
    }
    return 0;
}
