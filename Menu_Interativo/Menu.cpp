#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

float n1,n2,nt;
int menu, n3;
bool sair = false;

    while(!sair){
       system("cls");
        cout << endl << "bem vindo"<<endl;
        cout << "1 - calcular media de 2 notas"<<endl;
        cout << "2 - verificar se um numero e par ou impar"<<endl;
        cout << "3 - sair\n"<<endl;
        cin >> menu;

        switch(menu){
            case 1:
                cout << "Digite duas notas: ";
                cin >> n1;
                cin >> n2;
                nt = (n1 + n2)/2;
                cout << "Sua media foi: " << nt << endl;
                break;
            case 2:
                cout << "Digite um numero: ";
                cin >> n3;
                if(n3 % 2 == 0){
                    cout << n3 << " é um número par."<<endl;
                }else{
                    cout << n3 << " é um numero impar. "<<endl;
                }
                break;
            case 3: 
                sair = true;
                cout << " Obrigado por partipar.!" << endl;
                break;
            default:
                cout << "Opção invalida. Tente novamente" << endl << endl;

        }

        system("pause");
    }

    cout << "Programa finalizado. Até mais!";

  return 0;
}
