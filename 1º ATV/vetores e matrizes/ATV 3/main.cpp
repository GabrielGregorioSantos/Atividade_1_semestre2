#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float notas[5];
    float desvio[5];
    float desvio_quadrado[5];
    float media = 0;
    float variancia = 0;
    float desvio_padrao = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }

    media /= 5;

    for(int i = 0; i < 5; i++) {
        desvio[i] = notas[i] - media;
        desvio_quadrado[i] = desvio[i] * desvio[i];
        variancia += desvio_quadrado[i];
    }

    variancia /= 5;

    desvio_padrao = sqrt(variancia);

    cout << "Media das notas: " << media << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Desvio da nota do aluno " << i + 1 << ": " << desvio[i] << endl;
        cout << "Desvio ao quadrado da nota do aluno " << i + 1 << ": " << desvio_quadrado[i] << endl;
    }
    cout << "Variancia: " << variancia << endl;
    cout << "Desvio padrao: " << desvio_padrao << endl;

    return 0;
}
