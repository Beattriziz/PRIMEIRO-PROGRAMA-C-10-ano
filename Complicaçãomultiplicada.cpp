#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	do 
	{
		
		cout << "Diz-me um n�mero e irei dizer-te se � m�ltiplo de 3 ou de 5, ou de ambos! \n";
		cin >> num;
		if (num % 3 == 0 && num % 5 == 0)
		{
			cout << "O n�mero que escolheste � m�ltiplo de 3 e de 5 \n";
		}
		if (num % 3 != 0 && num % 5 != 0)
		{
			cout << "N�o � m�ltiplo de nenhum \n";
		}
		if (num % 3 == 0 && num % 5 != 0)
		{
			cout << "O n�mero � m�ltiplo de 3, mas n�o m�ltiplo de 5 \n";
		}
		if (num % 3 != 0 && num % 5 == 0)
		{
			cout << "O n�mero � m�ltiplo de 5, mas n�o de 3 \n";
		}

	} while (num != 0);
	cout << "Escolheste o n�mero 0. GET OUT. \n";
}
	