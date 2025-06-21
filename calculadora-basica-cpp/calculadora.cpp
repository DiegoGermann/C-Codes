#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    float num1, num2, result;
    char op, l1;

    inicio:
    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;
    cout << "Digite a operação (+ - * /): " << endl;
    cin >> op;

   switch (op){   
    case '+':
          result = num1 + num2;
          cout << "o valor é : " << result << endl;
        break;
    case '-':
           result = num1 - num2;
           cout << "o valor é : " << result << endl;
        break;
    case '*':
           result = num1 * num2;
           cout << "o valor é : " << result << endl;
        break;
    case '/':
    if (num2 != 0){
           result = num1 / num2;
           cout << "o valor é : " << result << endl;
    }else{
        cout << "o numero nao pode ser dividido por 0" << endl;
    }
        break;
   default:
        cout << "nenhuma opcao selecionada..." << endl;
        break;
   }
   
        cout << "quer realizar outro calculo. S ou N" << endl;
        cin >> l1;
    
     if(l1 == 'S' || l1 == 's'){
            system("cls");
            goto inicio;
        }else if(l1 == 'n' || l1 == 'N'){
            system("cls");
            cout << "obrigado pela preferencia..." << endl;
        }else{
            cout << "ERROR404" << endl;
        
    }

   return 0;
}
