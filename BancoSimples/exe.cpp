#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    float saldo = 1000.00, dp = 0, sc=0;
    bool sair = false;
    int menu;

    while(!sair){
        system("cls");
        cout << "=== Bem-vindo ao Banco ===" << endl;
        cout << "1 - Ver saldo" << endl;
        cout << "2 - Depositar" << endl;
        cout << "3 - Sacar" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> menu;

        switch(menu){
            case 1: 
                cout << "seu saldo é: " << saldo << endl;
                break;
        
            case 2: 
                cout << "qual valor você deseja depositar ? " << endl;
                cin >> dp;
                if(dp <= 0){
                    cout << "impossível realizar deposito..." << endl;
                }else{
                    saldo += dp;
                    cout << "valor depositado" << endl;
                }
                break; 
            
            case 3: 
                cout << "quanto você deseja sacar?" << endl;
                cin >> sc;
                if(sc <= 0){
                    cout << "impossível sacar esse valor" << endl;
                }else if(sc > saldo){
                    cout << "saldo insuficiente";
                }else {
                    saldo -= sc;
                    cout << "Saque realizado com sucesso!" << endl;
                }
                break;
            
            case 4: 
                sair = true;
                break; 

            default: 
                cout <<"Opção invalida. tente novamente." << endl;
    }
    system("pause");
}

  return 0;
}
