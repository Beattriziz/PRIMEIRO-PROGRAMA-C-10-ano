#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num=9;
	while (num != 0)
	{
		cout << "D�-me um n�mero \n";
		cin >> num;
		if (num > 0)
		{
			cout << "O teu n�mero � positivo! \n";
		}
		else
		{
			cout << "O teu n�mero � negativo.. \n";
		}
			
	}
	cout << "Escreves-te 0, kys.";

	
}
	

