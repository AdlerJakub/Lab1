#include "CMath.h"
#include <iostream>

CMath::CMath()
{
	wynik = 0;
}



void CMath::Add(double a, double b)
{
	wynik = a + b;


}

void CMath::Sub(double a, double b)
{
	wynik = a - b;
}

void CMath::Mul(double a, double b)
{
	wynik = a * b;
}

result_en CMath::Div(double a, double b)
{
	if (b == 0) ///sprawdza czy nie chcemy dzielic przez zero i zwraca odpowiedni komunikat
	{

		return res_error;
	}
	else
	{
		wynik = a / b;
		return res_ok;
	}

}

result_en CMath::SquareFunc(const double &a,const double &b,const double &c, double &x1, double &x2)
{
	if (a == 0) ///sprawdza czy wspolczynnik a jest odpowiedni
	{
		return res_error;
	}
	double delta;
	delta = pow(b, 2) - 4 * a*c;

	/* \brief Sprawdzanie delty
	*
	*	W zaleznosci od wartosci delty liczy (lub nie) odpowiednia ilosc miejsc zerowych.
	*/

	if (delta < 0)
	{
		return res_error;
	}
	if (delta == 0)
	{
		x1 = (-b ) / 2 * a;
		return res_one;
	}
	if (delta > 0)
	{
		x1 = (-b - sqrt(delta)) / 2 * a;
		x2 = (-b + sqrt(delta)) / 2 * a;
		return res_ok;
	}
}

double CMath::GetValue() const
{
	return wynik;
}