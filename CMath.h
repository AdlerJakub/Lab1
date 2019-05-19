#pragma once

enum result_en {
	res_ok,
	res_error,
	res_one ///wykorzystuje ta wartosc gdy jest tylko jedno miejsce zerowe
};
class CMath
{
private:
	double wynik;
public:
	CMath();

	void Add(const double a, const double b);
	void Sub(double a, double b);
	void Mul(double a, double b);
	result_en Div(double a, double b);

	double GetValue() const;

	result_en SquareFunc(const double &a, const double &b, const double &c,
		double &x1, double &x2);
};

