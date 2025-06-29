#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int n, senha, tentativa;
    senha = 9090;
    tentativa = 3;
    

    while (tentativa > 0){
        cout << "digite sua senha: ";
        cin >> n;
        if (n == senha){
            cout << "bem vindo!...";
            break;
        }
        tentativa--;
        cout << "Senha incorreta. tentativa restante: " << tentativa << endl;
    }
    if (tentativa == 0){
        cout << "Usuário bloqueado!!";
    }



  return 0;
}
