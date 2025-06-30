#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int voto;
    int ca=0, cb=0, cc=0, n=0, T=0;

        while(true){
            system("cls");
        cout << "1 – Candidato A\n";
        cout << "2 – Candidato B\n";
        cout << "3 – Candidato C\n";
        cout << "0 – Voto nulo\n";
        cout << "Digite seu voto (1, 2, 3 ou 0 para nulo, -1 para sair):";
        cin >> voto;

        if(voto == -1){
            break;
        }else if(voto == 1){
            ca++;
        }else if(voto == 2){
            cb++;
        }else if(voto == 3){
            cc++;
        }else if(voto == 0){
            n++;
        }else{
            cout << "Voto inválido, tente novamente" << endl;
        }
    }
    T = ca + cb + cc + n;

    cout << "\nResultado Votos";
    cout << "\nCandidato A: " << ca << " Votos\n";
    cout << "\nCandidato B: " << cb << " Votos\n";
    cout << "\nCandidato C: " << cc << " Votos\n";
    cout << "\nNulos: " << n << " Votos\n";
    cout << "\nTotal de votos: " << T;
    
    system("pause");
    
  return 0;
}
