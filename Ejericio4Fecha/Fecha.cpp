#include "Fecha.h"
#include <conio.h>
#define LeftKey 75
#define Escape 27
#define RightKey 77
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

Fecha::Fecha()
{
	_d = 0;
	_m = 0;
	_a = 0;
}

//void Fecha::setDia(int dia)
//{
//	_d = dia;
//}
//
//int Fecha::getDia()
//{
//	return _d;
//}
//
//void Fecha::setMes(int mes)
//{
//	_m = mes;
//}
//
//int Fecha::getMes()
//{
//	return _a;
//}
//
//void Fecha::setAnio(int año)
//{
//	_a = año;
//}
//
//int Fecha::getAnio()
//{
//	return 0;
//}

void Fecha::Reiniciar()
{
	_d = 0;
	_m = 0;
	_a = 1900;
	system("cls");
	cout << "\nReiniciando Fecha";
}

void Fecha::Adelantar(int d, int m, int a)
{
	string formatofecha;
	if (m == 0)
		m = 1;
	_d = d;
	_m = m;
	_a = 2002;
	_d++;
	if (d >= dias(_m))
	{
		++_m;
		_d = 1;
	}
	if (_m > 12)
	{
		++_a;
		_m = 0;
	}
	normalizar();
	formatofecha = (to_string(_d) + "/" + to_string(_m) + "/" + to_string(_a));
	system("cls");
	cout << "Aumentando Fecha\n";
	cout << "Fecha: " << formatofecha;
}

void Fecha::imprimir()
{
	int kb_code = 0;
	while (kb_code != Escape)
	{
		//cout << "Flecha derecha Aumentar fecha\n";
		//cout << "Flecha izquierda Reiniciar Fecha\n";
		//cout << "Escape salir\n"
		kb_code = _getch();
		switch (kb_code)
		{
		case LeftKey:
			Reiniciar();
			break;
		case RightKey:
			Adelantar(_d, _m, _a);
			break;
		}
	}
}

void Fecha::normalizar()
{
	if (_a > 3000)
	{
		_a = 3000;
	}
	if (_a < 1900)
	{
		_a = 1900;
	}
}

int Fecha::dias(int mes)
{
	_m = mes;
	switch (_m)
	{
	case 1:
		//enero 31
		if (_d > 31)
			_d = 31;
		return _d;
		break;
	case 2:
		if (_a % 4 == 0 && (_a%100 != 0 ) || (_a%400==0) )
		{
			if (_d > 29)
				_d = 29;
			return _d;
		}
		else
		{
			if (_d > 28)
				_d = 28;
			return _d;
		}
		
		break;
		//febrero 28 a 29 si es bisiesto
	case 3:
		if (_d > 31)
			_d = 31;
			return _d;
		break;
		//marzo 31 
	case 4:
		if (_d > 30)
			_d = 30;
		return _d;
		//abril 30
		break;
	case 5:
		if (_d > 31)
			_d = 31;
		return _d;
		break;
		//mayo 31
	case 6:
		if (_d > 30)
			_d = 30;
		return _d;
		//junio 30
		break;
	case 7:
		if (_d > 31)
			_d = 31;
		return _d;
		//julio 31
		break;
	case 8:
		if (_d > 31)
			_d = 31;
		return _d;
		//agosto 31
		break;
	case 9:
		if (_d > 30)
			_d = 30;
		return _d;
		//septiembre 30
		break;
	case 10:
		if (_d > 31)
			_d = 31;
		return _d;
		//octubre 31
		break;
	case 11:
		if (_d > 30)
			_d = 30;
		return _d;
		//noviembre 30
		break;
	case 12:
		if (_d > 31)
			_d = 31;
		return _d;
		//diciembre 31
		break;
	default:
		break;
	}
	return _d;
}
