#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int vetNum[5];
    int soma = 0;

    cout << "Digite os valores:" << endl;
    for(int i=0 ; i < 5 ; i++) {
        cin >> vetNum[i];
        if(vetNum[i] % 2 != 0)
            soma += vetNum[i];
    }


    cout << "A soma dos elementos e:"<< soma;
    cout << "\n\n";

    system("pause");
    return 0;
}
