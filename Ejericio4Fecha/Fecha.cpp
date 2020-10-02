#include "Fecha.h"
#include <conio.h>
#define LeftKey 75
#define Escape 27
#define RightKey 77
#define UpKey 72
#define DownKey 80
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
static string formatofecha;

Fecha::Fecha()
{
	_d = 1;
	_m = 1;
	_a = 1900;
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
	_d = 1;
	_m = 1;
	_a = 1900;
	formatofecha = (to_string(_d) + "/" + to_string(_m) + "/" + to_string(_a));
}

void Fecha::Adelantar(int d, int m, int a)
{
	if (m == 0 && d)
	{
		m = 1;
		d = dias(m);
	}
	_d = d;
	_m = m;
	_a = a;
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
	cout << "\nAumentando Fecha\n";
	/*cout << "Fecha: " << formatofecha;*/
}
void Fecha::Atrasar(int d, int m, int a)
{
	
	_d = d;
	_m = m;
	_a = a;
	if (_d == 1 && _m == 1 && a == 1900)
	{
		Reiniciar();
	}
	else
	{
		
		if (_d == 1)
		{
			_m--;
			_d = dias(_m);
			
		}

		if (_m < 1 && _d == 1)
		{
			_m = 12;
			_a--;
			_d = dias(_m);
		}
		--_d;
	}
	normalizar();
	formatofecha = (to_string(_d) + "/" + to_string(_m) + "/" + to_string(_a));
	cout << "\nBajando Fecha";
}
void Fecha::imprimir()
{
	int d = 0,m = 0,a = 0;
	int kb_code = 0;
	while (kb_code != Escape)
	{
		cout << "\nBIENVENIDO" << endl;
		cout << "\nFlecha derecha Aumentar fecha" << endl;
		cout << "\nFlecha izquierd Atrasar Fecha" << endl;
		cout << "\nFlecha Arriba reiniciar" << endl;
		cout << "\nFlecha abajo ingresar fecha" << endl;
		cout << "\nEscape salir\n" << endl;
		kb_code = _getch();
		switch (kb_code)
		{
		case LeftKey:
			Atrasar(_d, _m, _a);
			break;
		case RightKey:
			Adelantar(_d, _m, _a);
			break;
		case UpKey:
			Reiniciar();
			break;
		case DownKey:
			cout << "\nIngresando fecha manual" << endl;
			cout << "\nIngrese el dia: "; cin >> d;
			if (d < 1 || d > 31)
			{
				while (d<1 || d > 31)
				{
					cout << "\nIngrese un dia valido 1 - 31" << endl;
					cout << "\nIngrese el dia: "; cin >> d;
				}
			}
			cout << "\nIngrese el mes: "; cin >> m;
			if (m < 1 || m > 12)
			{
				while (m < 1 || m > 12)
				{
					cout << "\nIngrese un mes valido 1 - 12" << endl;
					cout << "\nIngrese el mes: "; cin >> m;
				}
			}
			cout << "\nIngrese el año: "; cin >> a;
			if (a < 1900  || a > 3000)
			{
				while (a < 1900 || a > 3000)
				{
					cout << "\nIngrese una año valido entre 1900 - 3000" << endl;
					cout << "\nIngrese el año: "; cin >> a;
				}		
			}
			if ((a % 4 == 0 && (a % 100 != 0) || (a % 400 == 0) && d > 29) && m == 2)
			{
				d = 29;
			}
			else
			{
				if (d > 28 && m == 2)
				{
					d = 28;
				}
			}
			IngresarFecha(d, m, a);
			break;
		}
		system("cls");
		cout << "\nFecha: " << formatofecha << endl;
	}
}
void Fecha::IngresarFecha(int d, int m, int a)
{
	formatofecha.clear();
	_d = d;
	_m = m;
	_a = a;
	d = dias(m);
	formatofecha = (to_string(_d) + "/" + to_string(_m) + "/" + to_string(_a));
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
	if (_m < 1)
	{
		_m = 1;
	}
	if (_d < 1)
	{
		_d = 1;
	}
}

int Fecha::dias(int mes)
{
	_m = mes;
	switch (_m)
	{
	case 1: 
	case 3:
	case 5: 
	case 7: 
	case 8: 
	case 10: 
	case 12:
		//enero 31
		if (_d > 31)
		{
			return _d = 31;
		}			
		if (_d <= 1)
		{
			return _d = 32;
		}
		return _d;
		break;
	case 2:
		if (_a % 4 == 0 && (_a%100 != 0 ) || (_a%400==0) )
		{
			if (_d > 29)
				_d = 29;
			if (_d <= 1)
			{
				_d = 30;
			}
			return _d;
		}
		else
		{
			if (_d > 28)
				_d = 28;
			if (_d <= 1)
			{
				_d = 29;
			}
			return _d;
		}
		break;
		//febrero 28 a 29 si es bisiesto
		//marzo 31 
	case 4:
	case 6:
	case 9:
	case 11:
		if (_d > 30)
		{
			return _d = 30;
		}
		if (_d <= 1)
		{
			return _d = 31;
		}
		if (_d == 1)
		{
			return  _d = 30;
		}
		return _d;
		//abril 30
		break;
	default:
		break;
	}
	return _d;
}
