#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	string disciplinas[9] = { "ACSO", "Matem�tica", "EDF", "TIC", "Portugu�s", "AI", "FQ", "TLP", "Ingl�s" };
	string stores[9] = {"Jo�o", "Clarinda", "Pedro", "Clara", "Florbela", "Vera", "In�s", "Clara", "Margarida"};
	int num;
	char sair = "n";
	do
	{
		cout << "Escolhe um n�mero, e eu digo-te a disciplina e o professor que a d�\n";
		cin >> num;
		if (num < 0 || num > 4)
		{
			cout << "Queres ter mais mat�rias do que isto? Masoquista.\n";
		}
		else if (num > 0 || num < 8)
		{
			cout << "A disciplina � " << disciplinas[num] << " e o professor � " << stores[num] << endl;
		}
		cout << "Deseja sair?(s/n)\n";
	} while (sair = "n");
		return 0;
}