#include <iostream>

#include <locale.h>

#include <string>

using namespace std;


int main()

{

    setlocale(LC_ALL, "Portuguese");

    string namoradas[5] = {};

    string nomes[5] = {};

    int num, i;

    char sair = 'n';

    for (int i = 0; i < 5; ++i)

    {
        cout << "\33[97Diz-me o nome que chamas � tua namorada\n";
        cin >> namoradas[i];
        cout << "\33[97Agora o nome cute que lhe chamas\n";
        cin >> nomes[i];
    }

    do {
        cout << "\33[97Qual � o n�mero dela?\n";
        cin >> num;
        num = num - 1
        if (num >= 0 && num < 5)
        {
            cout << "\33[31O nome da tua namorada �" << namoradas[num];
            cout << "\33[31E o apelido que lhe d�s �" << nomes[num];
        }

        else 
        {
            cout << "\33[97N�o conhe�o.\n";
        }
        cout << "\33[97Desejas sair?\n";
        cin >> sair;

    } while (sair != 's');

    return 0;

}
