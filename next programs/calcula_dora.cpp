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
	int num1, num2, numescolha;
	cout << "Ol� ser humano burro. Desejas fazer uma conta de soma, subtra��o, multiplica��o ou divis�o (1-4)";
	cin >> numescolha;
	numescolha = numescolha - 1;
	cout << "D�-me o primeiro n�mero";
	cin >> num1;
	cout << "D�-me o segundo n�mero";
	cin >> num2;
	if (numescolha<1)
	{
		cout << "A tua soma � igual a" <<  num1 + num2;
	}
	else if(numescolha < 2)
	{
		cout << "A tua subtra��o � igual a" <<  num1 - num2;
	}
	else if (numescolha < 3)
	{
		cout << "A tua multiplica��o � igual a" << num1 * num2;
	}
	else if (numescolha < 4)
	{
		cout << "A tua divis�o � igual a" <<  num1 + num2;
	}
	else
	{
		cout << "N�o te fa�o mais contas matem�ticas meu ganda burro, queres saber os c�lculos aprende a faz�-los";
	}
	return 0;
}