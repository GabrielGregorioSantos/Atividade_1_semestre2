#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char string[101];
    int contador = 0;

    cout << "Digite uma string (max 100 caracteres): ";
    cin.getline(string, 101);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == 'a') {
            string[i] = 'b';
            contador++;
        }
    }

    cout << "Numero de caracteres 'a' modificados: " << contador << endl;
    cout << "String modificada: " << string << endl;

    return 0;
}
