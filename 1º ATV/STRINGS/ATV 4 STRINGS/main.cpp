#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char cargo[20];
    float salario, novoSalario, diferenca;

    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cout << "Digite o cargo do funcionario (Gerente, Engenheiro, Tecnico): ";
    cin.ignore();
    cin.getline(cargo, 20);

    if (strcmp(cargo, "Gerente") == 0) {
        novoSalario = salario * 1.10;
    } else if (strcmp(cargo, "Engenheiro") == 0) {
        novoSalario = salario * 1.20;
    } else if (strcmp(cargo, "Tecnico") == 0) {
        novoSalario = salario * 1.30;
    } else {
        novoSalario = salario * 1.05;
    }

    diferenca = novoSalario - salario;

    cout << "Salario antigo: R$ " << salario << endl;
    cout << "Novo salario: R$ " << novoSalario << endl;
    cout << "Diferenca: R$ " << diferenca << endl;

    return 0;
}
