/*
Leonardo Aguilar
Verifica se o cpf é válido ou não
Entrada: 9 dígitos do cpf, 2 dígito verificadores
Saída: CPF Válido, CPF não válida
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //Declaração das variáveis
    long long cpf, dv, v1=0, v2=0, i=0, dig;

    //Entrada de dados
    cout<<"Digite os 9 primeiros digitos do seu CPF: "<<endl;
    cin>>cpf;

    cout<<"Digite os 2 digitos verificadores do seu CPF: "<<endl;
    cin>>dv;

    cout << "CPF = "<<cpf<<endl;

    //Looping dos cálculos do 9 primeiros dígitos
    for(int d = 0; d < 9; d++){
        dig = cpf%10;
        cpf /= 10;
        v1 += dig*(9 - (i%10) );
        i++;
        v2 += dig*(9 - (i%10));
    }

    //Cálculo dos dígitos verificadores
    v1 = (v1%11)%10;
    v2 = ((v2 + v1*9)%11)%10;

    //Saída de dados
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
