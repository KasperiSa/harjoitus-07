/* Tämä toimii */
#include <iostream>		
using namespace std;



int main()
{
	char nimi[40];
	int pituus;
	char osoite[40];
	int paino;
	

	cout << "Anna nimesi > ";
	cin.get(nimi, 30);
	cout << "Anna pituutesi sentteinä > ";
	cin >> pituus;
	cout << "Anna osoitteesi > ";
	cin.get();
	cin.get(osoite, 30);
	cout << "Anna painosi > ";
	cin >> paino;

	int ihannepaino = pituus - 100;
	int erotus = paino - ihannepaino;

	cout << "\nArvoisa " << nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen Painosi " << paino << " kg";
	cout << "\nIhannepainosi " << ihannepaino << " kg";
	cout << "\nerotus " << erotus << " kg";
}