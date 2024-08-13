#include <iostream>

using namespace std;

int main() {
    int M, N, K;
    int matriz[20][25];
    int transposta[25][20];
    int multiplicada[20][25];
    int matriz2[20][25];
    int soma[20][25];

    cout << "Informe o numero de linhas M (maximo 20): ";
    cin >> M;
    cout << "Informe o numero de colunas N (maximo 25): ";
    cin >> N;

    if(M <= 0 || M > 20 || N <= 0 || N > 25) {
        cout << "Tamanho invalido para a matriz!" << endl;
        return 1;
    }

    cout << "Informe os elementos da matriz:" << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "Informe o fator K para multiplicacao: ";
    cin >> K;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            multiplicada[i][j] = matriz[i][j] * K;
        }
    }

    cout << "Informe os elementos da segunda matriz para adicao:" << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            soma[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    cout << "Matriz transposta:" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz multiplicada pelo fator " << K << ":" << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << multiplicada[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Soma das duas matrizes:" << endl;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
