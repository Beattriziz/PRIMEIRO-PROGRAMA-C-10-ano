#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string aulas[5] = {"Portugu�s", "Matem�tica", "Ingl�s", "FQ","TLP"};
	string s = "n";
	int num;
	do 
	{
		cout << "Qual das chatisses queres saber?\n";
		cin >> num;
	 if(num < 0 || num > 4) 
	 {
		cout << "S� podes escolher entre 0 e 4 meu ganda boi, nn tenho paci�ncia para escrever todas mat�rias\n";
	 }
	 else if (num==0)	 
	 {
		 cout << aulas[0] << "\n";
	 }
	 else if (num == 1)
	 {
		 cout << aulas[1] << "\n";
	 }
	 else if (num == 2)
	 {
		 cout << aulas[2] << "\n";
	 }
	 else if (num == 3)
	 {
		 cout << aulas[3] << "\n";
	 }
	 else if (num == 4)
	 {
		 cout << aulas[4] << "\n";
	 }

	} while (num != 0);
	return 0;
}


