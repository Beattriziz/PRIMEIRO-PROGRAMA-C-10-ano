#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string carros[3] = { "Volvo", "BMW","Mercedes" };
	string s = "n";
	int num;
	do
	{
		cout << "Qual carro queres saber?\n";
		cin >> num;
		if (num < 0 || num > 3)
		{
			cout << "Meu ganda burro, s� tens 3 carros\n";
		}
		else if (num < 3 || num > 0)
		{
			cout << "O carro �" <<carros[num];
		}
		cout << "Desejas sair?(s/n)\n";

	} while)(s="n");
	return 0;
		
}