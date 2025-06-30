#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int n, n2, t;
    char cont = 's';
    

    while(cont == 's' || cont == 'S'){
        n2 = 0;
        system("cls");
    cout << "Digite o número que deseja ver a tabuada: ";
    cin >> n; 

    cout << "\ntabuada do " << n << ":\n";
    while(n2 <= 10){
     t=n * n2;
     cout << n << " x " << n2 << " = " << t << "\n";
     n2++;
    
    }
      cout << "\nDeseja ver outra tabuada? (s/n): ";
      cin >> cont;
      system("pause");
    }
   cout << "finalizado..";
  return 0;
}
