#include <iostream>
using namespace std;

int main ()

{
    // Ich bin der Musikant mit Taschenrechner in der Hand

    int n1 = 0;
    int n2 = 0;
    int resultado = 0;
    char escolha = 'a';

    cout << "Que tipo de operacao quer fazer?" << endl;
    cout << "(A-Adicao, S-Subtracao, D-Dividir, M-Multiplicar?" << endl;
    cin >> escolha;

    // Ich addiere

    if (escolha == 'A' | 'a') {

        cout << "insira o primeiro valor: " << endl;
        cin >> n1;
        cout << "insira o segundo valor: " << endl;
        cin >> n2;

        resultado = n1 + n2;
        cout << "O resultado e: " << resultado << endl;

    }

    // und subtrachiere

    else if (escolha == 'S' | 's') {

        cout << "insira o primeiro valor: " << endl;
        cin >> n1;
        cout << "insira o segundo valor: " << endl;
        cin >> n2;

        resultado = n1 - n2;
        cout << "O resultado e: " << resultado << endl;

    }
    
    else if(escolha == 'D' | 'd') {

        cout << "insira o primeiro valor: " << endl;
        cin >> n1;
        cout << "insira o segundo valor: " << endl;
        cin >> n2;

        resultado = n1 / n2;
        cout << "O resultado e: " << resultado << endl;

    }

    else if (escolha == 'M' | 'm') {

        cout << "insira o primeiro valor: " << endl;
        cin >> n1;
        cout << "insira o segundo valor: " << endl;
        cin >> n2;

        resultado = n1 * n2;
        cout << "O resultado e: " << resultado << endl;

    }

    else 
    {
        cout << "Valor incorreto" << endl;
    };

    // und wenn ich diese Taste drück', spielt er ein kleines Musikstück
    
    return 0;

}
