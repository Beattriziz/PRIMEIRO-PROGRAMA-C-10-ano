#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int adivinha, quantos=0;
	int randomNum = (rand() % 99) + 1;
	do {
		cout << "D�-me um n�mero:";
		cin >> adivinha;
		if (randomNum > adivinha)
		{
			cout << "O n�mero � maior\n";
			quantos = quantos + 1;
		}
		else if (randomNum < adivinha)
		{
			cout << "O n�mero � inferior\n";
			quantos = quantos + 1;
		}

	} while (randomNum != adivinha);
	cout << "O n�mero � igual\n";
	if (quantos <= 5)
	{
		cout << "\33[95m�s um god. OMFG!!!\n";
	}
	else if (quantos <= 10)
	{
		cout << "\33[92mParab�ns";
	}
	else
	{
		cout << "\33[93mLoser de merda. Botik\n";
	}

	return 0;
}