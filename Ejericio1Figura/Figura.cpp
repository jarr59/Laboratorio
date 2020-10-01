#include "Figura.h"
#include <iostream>
using namespace std;
#define Pi double(3.1416)

void Figura::setladoA(double ladoA)
{
	_ladoA = ladoA;
}

double Figura::getladoA()
{
	return _ladoA;
}

void Figura::setLadoB(double ladoB)
{
	_ladoB = ladoB;
}

double Figura::getLadoB()
{
	return _ladoB;
}

void Figura::setAltura(double altura)
{
	_altura = altura;
}

double Figura::getAltura()
{
	return _altura;
}

double Figura::getAreaCuadrado(double lado)
{
	return lado * 4;
}
double Figura::getPerimetroCuadrado(double lado)
{
	return lado * lado;
}

double Figura::getAreaRectangulo(double ladoA, double ladoB)
{
	return (ladoA * ladoB);
}

double Figura::getPerimetroRectangulo(double ladoA, double ladoB)
{
	return ((2 * ladoA) + (2 * ladoB));
}

double Figura::getAreaCircunferencia(double diametro,double radio)
{
	return Pi * (diametro * radio);
}

double Figura::getPerimetroCircunferencia(double diametro)
{
	return Pi * (2 * (diametro));
}

double Figura::getPerimetroTriangulo(double ladoA,double base)
{
	return (ladoA + ladoA + base);
}

double Figura::getAreaTriangulo(double base, double altura)
{
	return ((base * altura) / 2);
}