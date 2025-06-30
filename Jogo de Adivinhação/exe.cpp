#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int nf, n, tentativa = 5;
    bool acertou = false;

    nf = 41;

    while(tentativa > 0){
        cout << "digite um numero: ";
        cin >> n;
        if(n == nf){
            cout << "voce acertou: " << nf;
            acertou = true;
            break;
        }else if(n > nf){
            cout << "Muito alto... você tem mais " << tentativa - 1 << " tentativas." << endl;
        }else if(n < nf){
            cout << "muito baixo... voce tem mais " << tentativa - 1 << " tentativas." << endl;
        }
        tentativa--;
    }
    if(!acertou)
    cout << "Fim de jogo. O número era:" << nf;

  return 0;
}
