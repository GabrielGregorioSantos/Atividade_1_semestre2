
#include <iostream>

using namespace std;

int main() {
    int quantidade[5];
    float preco[5];
    float valor_total_produto[5];
    float valor_total_compra = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Digite a quantidade comprada do produto " << i + 1 << ": ";
        cin >> quantidade[i];
        cout << "Digite o preco unitario do produto " << i + 1 << ": ";
        cin >> preco[i];
    }

    for(int i = 0; i < 5; i++) {
        valor_total_produto[i] = quantidade[i] * preco[i];
        valor_total_compra += valor_total_produto[i];
    }

    for(int i = 0; i < 5; i++) {
        cout << "Valor total a ser pago pelo produto " << i + 1 << ": R$ " << valor_total_produto[i] << endl;
    }

    cout << "Valor total da compra: R$ " << valor_total_compra << endl;


    return 0;
}
