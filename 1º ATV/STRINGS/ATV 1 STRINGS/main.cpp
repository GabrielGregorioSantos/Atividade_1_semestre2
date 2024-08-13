#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nome[51];
    char menor_nome[51] = "";

    cout << "Digite os nomes (pressione ENTER sem digitar nada para finalizar):" << endl;

    while (true) {
        cout << "Digite um nome: ";
        cin.getline(nome, 51);

        if (strlen(nome) == 0) {
            break;
        }

        if (strlen(menor_nome) == 0 || strcmp(nome, menor_nome) < 0) {
            strcpy(menor_nome, nome);
        }
    }

    if (strlen(menor_nome) > 0) {
        cout << "O nome lexicograficamente menor e: " << menor_nome << endl;
    } else {
        cout << "Nenhum nome foi fornecido." << endl;
    }

    return 0;
}
