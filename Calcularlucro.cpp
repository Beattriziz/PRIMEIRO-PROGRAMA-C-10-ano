#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	double sandes = 1, bolos = 0.8, refrigerantes = 1.5, cafe = 0, 6;
	float PVsandes, PVbolos, PVrefrigerantes, PVcafe, lucro;
	int Qsandes, Qbolos, Qrefrigerantes, Qcafe;
	cout << "Quantas sandes foram vendidas?\n";
	cin >> Qsandes;
	cout << "Quantas bolos foram vendidas?\n";
	cin >> Qbolos;
	cout << "Quantas regrigerantes foram vendidos?\n";
	cin >> Qrefrigerantes;
	cout << "Quantas caf�s foram vendidos?\n";
	cin >> Qcafe;
	cout << "A que pre�o foram vendidas as sandes?\n";
	cin >> PVsandes;
	cout << "A que pre�o foram vendidos os bolos?\n";
	cin >> PVbolos;
	cout << "A que pre�o foram vendidos os refrigerantes?\n";
	cin >> PVrefrigerantes;
	cout << "A que pre�o foram vendidos os caf�s?\n";
	cin >> PVcafe;
	lucro = (Qsandes * PVsandes) + (Qbolos * PVbolos) + (Qrefrigerantes * PVrefrigerantes) + (Qcafe * PVcafe);
	cout << "O lucro total de hoje foi de" << lucro << endl ;
}
