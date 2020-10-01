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

void Figura::LeerDatosCuadrado()
{
	system("cls");
	double lado=0;
	cout << "\nCalcular el perimetro y area de un cuadrado" << endl;
	cout << "\nIngrese un lado del cuadrado: "; cin >> lado;
	setladoA(lado);
}

void Figura::MostrarDatosCuadrado()
{
	cout << "\nPerimetro: " << getladoA() * 4 << endl;
	cout << "\nArea: " << getladoA() * getladoA() << endl;
}

void Figura::LeerDatosRectangulo()
{
	double ladoA = 0;
	double ladoB = 0;
	system("cls");
	cout << "\nCalcular el perimetro y area de un rectangulo" << endl;
	cout << "\nIngrese el lado A: "; cin >> ladoA;
	setladoA(ladoA);
	cout << "\nIngrese el lado B: "; cin >> ladoB;
	setLadoB(ladoB);
}

void Figura::MostrarDatosRectangulo()
{
	cout << "\nPerimetro: " << (2 * getladoA()) + (2 * getLadoB()) << endl;
	cout << "\nArea: " << (getladoA() * getLadoB()) << endl;
}

void Figura::LeerDatosCircunferencia()
{
	double diametro = 0;
	double radio = 0;
	system("cls");
	cout << "\nCalcular perimetro y area de una circunferencia" << endl;
	cout << "\nIngrese el diametro: "; cin >> diametro;
	setladoA(diametro);
	cout << "\nIngrese el radio: "; cin >> radio;
	setLadoB(radio);
}

void Figura::MostrarDatosCircunferencia()
{
	cout << "\nPerimetro: " << Pi * (2 * (getladoA()));
	cout << "\nArea: " << Pi * (getLadoB() * getLadoB());
}

void Figura::LeerDatosTriangulo()
{
	double ladoAB=0;
	double base = 0;
	double altura = 0;
	system("cls");
	cout << "\nCalcular area y perimetro de un triangulo Isósceles" << endl;
	cout << "\nIngrese el lado A o B: "; cin >> ladoAB;
	setladoA(ladoAB);
	cout << "\nIngrese la base: "; cin >> base;
	setLadoB(base);
	cout << "\nIngrese la altura: "; cin >> altura;
	setAltura(altura);
}

void Figura::MostrarDatosTriangulo()
{
	cout << "\nPerimetro: " << (getladoA() + getladoA() + getLadoB());
	cout << "\nArea: " << (getLadoB() * getAltura()) / 2;
}