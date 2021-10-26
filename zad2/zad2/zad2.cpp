#include <iostream>

using namespace std;

int main()
{
	// Zadanie 1

	/*

	float a, b;


    cout << "Podaj a: ", cin >> a;

	cout << "Podaj b: ", cin >> b;

	if (a == 0) {
		if (b == 0) {
			cout << "rownanie rozsamosciowe\n";
		}
		else {
			cout << "rownanie sprzeczne\n";
		}
	}
	else {
		cout << "x = " << -b / a;
	}

	 */





	// Zadanie 3

	/*

	float a, b, c;

	cout << "Podaj a: ", cin >> a;

	cout << "Podaj b: ", cin >> b;

	cout << "Podaj c: ", cin >> c;

	if (a != 0) {
		float delta = (b * b) - (4 * a * c);

		if (delta == 0) {
			cout << "Jedno rozwiazanie, x1 = " << -b / (2 * a) << endl;
		}
		else if (delta > 0) {
			cout << "Dwa rozwiazania: \n";
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else cout << "Brak rozwiazan \n";
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "Rownanie rozsamosciowe \n";
			}
			else {
				cout << "Rownanie sprzeczne \n";
			}
		}
		else {
			cout << "Rownanie liniowe, jedno rozwiazanie x = " << -c / b;
		}
	}

	 */

	// Zadanie 4




	/*
	float x;
	
	cout << "Podaj x: ", cin >> x;

	cout << "Funkcja a(x): ";

	if (x > 0) {
		cout << 2 * x;
	}
	else if (x == 0) {
		cout << 0;
	}
	else {
		cout << -3 * x;
	}

	cout << endl << "Funkcja b(x): ";

	if (x >= 1) {
		cout << x*x;
	}
	else {
		cout << x;
	}

	cout << endl << "Funkcja c(x): ";

	if (x > 2) {
		cout << 2 + x;
	}
	else if (x == 2) {
		cout << 8;
	}
	else {
		cout << x - 4;
	}
	*/

	
	//Zadanie 5




	/*
	float x, y, z;

	cout << "Podaj x: ", cin >> x;

	cout << "Podaj y: ", cin >> y;

	cout << "Podaj z: ", cin >> z;

	cout << endl;

	if (x >= y && x >= z) {
		if (y >= z) {
			cout << x << ", " << y << ", " << z;
		}
		else {
			cout << x << ", " << z << ", " << y;
		}
	}
	else if (x <= y && x >= z) {
		cout << y << ", " << x << ", " << z;
	}
	else if (x >= y && x <= z) {
		cout << z << ", " << x << ", " << y;
	}
	else if (x <= y && x <= z) {
		if (y >= z) {
			cout << y << ", " << z << ", " << x;
		}
		else {
			cout << z << ", " << y << ", " << x;
		}
	}
	*/


	// Zadanie 6
	

	/*
	bool bus, deszcz;

	cout <<"Czy pada deszcz? Jeśli tak wpisz 1: ", cin >> deszcz;

	cout <<"Czy jest autobus? Jeśli tak wpisz 1: ", cin >> bus;

	if (deszcz && bus) {
		cout << endl << "Wez parasol";
		cout << endl << "Dostaniesz sie nauczelnie";
	}
	else if (deszcz && !bus) {
		cout << endl << "Nie dostaniesz sie na uczelnie";
	}
	else if (!deszcz && bus) {
		cout << endl << "Dostaniesz sie na uczelnie";
		cout << endl << "Milego dnia i pieknej pogody";
	}
	*/
	


	// Zadanie 7

	bool znizka, premia;

	cout << "Czy jest znizka na samochod? Jeśli tak wpisz 1: ", cin >> znizka;

	cout << "Czy otrzymales premie? Jeśli tak wpisz 1: ", cin >> premia;

	if (!znizka || premia) {
	cout << endl << "Mozesz kupic samochod !";
	cout << endl << "Znizki na samochod nie ma :(";
	}
	else if (!znizka || !premia) {
	cout << endl << "Zakup samochod trzeba odlozyc na pozniej...";
	cout << endl << "Znizki na samochod nie ma";
	}
	else if (znizka || premia) {
	cout << endl << "Mozesz kupic samochod !";
	}
}