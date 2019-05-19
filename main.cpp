#include <iostream>
#include "CMath.h"
#include <cstdlib>

using namespace std;

int main()
{
	/*!
	* /brief Pobieranie danych oraz prezentacja wynikow.
	*
	*Najpierw program pobiera od u¿ytkownika dane, potem prezentuje wyniki poprzez wywo³anie metod obiektu. 
	*Sprawdzanie prawdziowœci danych odbywa siê w samym obiekcie.
	*/
	
	double a, b, c, x1, x2, wynik;
	result_en rezultat;
	cout << "Podaj a:" << endl;
	cin >> a;
	cout << "Podaj b:" << endl;
	cin >> b;
	cout << "Podaj c:" << endl; 
	cin >> c;

	CMath obiekt;


	obiekt.Add(a, b);
	wynik = obiekt.GetValue();
	cout << "Suma:" <<  wynik << endl;

	obiekt.Sub(a, b);
	wynik = obiekt.GetValue();
	cout << "Roznica:" << wynik << endl;

	obiekt.Mul(a, b);
	wynik = obiekt.GetValue();
	cout << "Iloczyn:" << wynik << endl;

	rezultat = obiekt.Div(a, b);

	if (rezultat == res_ok)
	{
		wynik = obiekt.GetValue();
		cout << "Iloraz:" << wynik << endl; 
	}
	if (rezultat == res_error)
	{
		cout << "Dzielenie przez zero" << endl; ///gdy metoda zwróci b³¹d wyswietla sie powiadomienie o jego przyczynie
	}

	rezultat = obiekt.SquareFunc(a, b, c, x1, x2);

	/* \brief Wyswietlanie miejsc zerowych.
	*
	* W zale¿noœci od zwróconego komunikatu zostaj¹ wyœwietlone odpowiednie wartoœci wraz z tekstem.
	*/

	if (rezultat == res_error)
	{
		cout << "Brak rzeczywistych miejsc zerowych/ To nie jest funkcja kwadratowa" << endl; ///gdy metoda zwróci infomracje o b³êdzie wyswiatla siê komunika informuj¹cy o mo¿liwej przyczynie b³êdu
	}
	if (rezultat == res_one)
	{
		cout << "Miejsce zerowe:" << x1 << endl;
	}
	if (rezultat == res_ok)
	{
		cout << "Miejsca zerowe:" << x1 << "oraz" << x2 << endl;
	}
	system("pause");
	return 0;
}