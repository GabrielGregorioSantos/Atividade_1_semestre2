#include <iostream>
using namespace std;

int main() {
    int n;
    int numeros[10];
    int maior1 = 0, maior2 = 0;
    int soma_pares_impares = 0;

    cout << "Quantos elementos serao inseridos (maximo 10)? ";
    cin >> n;

    if(n <= 0 || n > 10) {
        cout << "Quantidade invalida de elementos!" << endl;
        return 1;
    }

    for(int i = 0; i < n; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> numeros[i];

        if(numeros[i] > maior1) {
            maior2 = maior1;
            maior1 = numeros[i];
        } else if(numeros[i] > maior2) {
            maior2 = numeros[i];
        }

        if(i % 2 != 0 && numeros[i] % 2 == 0) {
            soma_pares_impares += numeros[i];
        }
    }

    cout << "Os dois maiores elementos sao: " << maior1 << " e " << maior2 << endl;
    cout << "A soma dos elementos pares em posicoes impares e: " << soma_pares_impares << endl;

    return 0;
}
