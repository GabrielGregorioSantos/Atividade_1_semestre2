#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char primeira_string[51];
    char segunda_string[51];

    cout << "Digite a primeira string (max 50 caracteres): ";
    cin.getline(primeira_string, 51);

    cout << "Digite a segunda string (max 50 caracteres): ";
    cin.getline(segunda_string, 51);

    cout << "Primeira string: " << primeira_string << endl;
    cout << "Segunda string: " << segunda_string << endl;

    if (strlen(primeira_string) >= 2) {
        cout << "Segunda letra da primeira string: " << primeira_string[1] << endl;
    } else {
        cout << "A primeira string nao tem uma segunda letra." << endl;
    }

    int tamanho_segunda = strlen(segunda_string);
    if (tamanho_segunda >= 2) {
        cout << "Penultima letra da segunda string: " << segunda_string[tamanho_segunda - 2] << endl;
    } else {
        cout << "A segunda string nao tem uma penultima letra." << endl;
    }

    return 0;
}
