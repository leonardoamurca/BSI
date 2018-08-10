/*
Programador: LEONARDO AGUILAR MURÇA
Disciplina: AEDs II
Lista 0
Entrega: 09/08/18

PROBLEMA:
Um comerciante deseja fazer o levantamento do lucro das
mercadorias que ele comercializa. Para isto, mandou digitar
uma linha para cada preço de compra e preço de venda das
mesmas. Fazer um algoritmo em C++ que:

- Determine e escreva quantas mercadorias geram:
•Lucro < 10%.
•10% <= lucro <= 20%.
•Lucro > 20%.

- Determine e escreva: O valor total de compra e de venda de
 todas as mercadorias, assim como o lucro total (percentual e valor).
 */

#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	int nMerc, lucro[3] = {0, 0, 0};

	cout << "Digite o número de mercadorias: " << endl;
	cin >> nMerc;

	float pC[nMerc], pV[nMerc], venda = 0, compra = 0, lucroTotal = 0;

	for(int i = 0; i < nMerc; i++){
        pC[i] = 0;
        pV[i] = 0;
	}

	for(int i = 0; i < nMerc; i++){
        cout << "Digite o preço de COMPRA da mercadoria " << i+1 << ":"<< endl;
        cin >> pC[i];

        cout << "Digite o preço de VENDA da mercadoria " << i+1 << ":"<< endl;
        cin >> pV[i];

        compra += pC[i];
        venda += pV[i];

        if(pV[i] < (pC[i]*1.1) ){
            lucro[0]++;
        }
        else if( (pV[i] >= (pC[i]*1.1)) and (pV[i] <= (pC[i]*1.2))){
            lucro[1]++;
        }
        else{
            lucro[2]++;
        }
	}

	lucroTotal = venda - compra;
	cout << "Lucro < 10%: " << lucro[0] << " mercadorias!" << endl;
	cout << "10% <= Lucro <= 20%: " << lucro[1] << " mercadorias!" << endl;
	cout << "Lucro > 20%: " << lucro[2] << " mercadorias!" << endl;
	cout << "Valor total de compra: R$" << compra << ",00" << endl;
	cout << "Valor total de venda: R$" << venda << ",00" << endl;
	cout << "Lucro total: R$" << lucroTotal << ",00" << endl;

return 0;
}
