#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, menor= 2147483647, maior=0;
	do
	{
		cout << "Diz-me um n�mero:\n";
		cin >> num;
		if (num < menor && num != 0);
		{
			menor = num;
		}
		if (num>maior)
		{
			maior = num;
		}

	} while (num != 0);
	cout << "\nO n�mero menor �\n" << menor;
	cout << "\nO n�mero maior �\n" << maior;
	cout << "\nEscolheste 0. Kys.\n";
	return 0;
}