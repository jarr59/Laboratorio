#include "Empleado.h"
#include <iostream>
#include <stdio.h>
using namespace std;

static Empleado emp[5];
static int contador = 0;

Empleado::Empleado()
{}
Empleado::~Empleado()
{
	cout << "\nDestruyendo objeto empleado";
}

void Empleado::leerDatos()
{

	if (contador < 5)
	{
		system("cls");
		cout << "\nBienvenido al Registro de un Empleado.\n";
		cout << "\nIngrese el Id del Empleado: "; cin >> emp[contador]._idEmpleado;
		cout << "\nIngrese el Nombre: "; cin >> emp[contador]._nombre;
		cout << "\nIngrese la Fecha de Ingreso\n";
		formatoFecha(contador);
		contador++;
	}
	else
	{
		system("cls");
		cout << "**************AVISO******************\n";
		cout << "\nYa no puedes agragar mas registros\n";
	}
	
}
void Empleado::verDatos()
{
	system("cls");
	cout << "\nMostrando datos\n";

	for (int i = 0; i <= contador - 1; i++)
	{
		cout<<"\nId del Empleado: " << emp[i]._idEmpleado << endl;
		cout << "\nNombre: " << emp[i]._nombre << endl;
		cout << "\nFecha de ingreso: " << emp[i]._fechaIngreso << endl;
	}
}

void Empleado::formatoFecha(int contad)
{
	cout << "\nAño: "; cin >> _año;
	cout << "\nMes: "; cin >> _mes;
	cout << "\nDia: "; cin >> _dia;

	while (_año < 1900 || _año > 2020 || _año == 0)
	{
		cout << "\nAnio valido: 1900 - 2020";
		cout << "\nIngrese el Anio: "; 
		cin >> _año;
	}
	while (_mes > 12 || _mes < 1)
	{
		cout << "\nMeses valido: 1 - 12";
		cout << "\nIngrese el Mes: "; cin >> _mes;
	}
	while (_dia > 31 || _dia < 1)
	{
		cout << "\nIngrese un dia valido: 1 - 31";
		cout << "\nIngrese el dia: "; cin >> _dia;
		
	}
	emp[contad]._fechaIngreso = (to_string(_año) + "/" + to_string(_mes) + "/" + to_string(_dia));
}