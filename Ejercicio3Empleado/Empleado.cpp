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

void Empleado::leerDatos(int conta, string id, string nombre,int dia, int mes,int anio)
{
	emp[conta].setIdEmpleado(id);
	emp[conta].setNombre(nombre);
	emp[conta].setFechaIngreso(dia,mes,anio);
	contador = conta;
}

void Empleado::verDatos()
{
	system("cls");
	cout << "\nMostrando datos\n";
	for (int i = 0; i <= contador ; i++)
	{
		cout<<"\nId del Empleado: " << emp[i].getIdEmpleado() << endl;
		cout << "\nNombre: " << emp[i].getNombre() << endl;
		cout << "\nFecha de ingreso: " << emp[i].getFechaIngreso() << endl;
		cout << "******************************" << endl;
	}
}

void Empleado::verDatosEmpleado(string &idmpleado,string &nombre,string &fechaingreso,int &i)
{
	for (int j = 0; j <= i;j++)
	{
		idmpleado = emp[j].getIdEmpleado();
		nombre = emp[j].getNombre();
		fechaingreso = emp[j].getFechaIngreso();
	}
}

void Empleado::setNombre(string nombre)
{
	_nombre = nombre;
}

string Empleado::getNombre()
{
	return string(_nombre);
}

void Empleado::setIdEmpleado(string idEmpleado)
{
	_idEmpleado = idEmpleado;
}

string Empleado::getIdEmpleado()
{
	return string(_idEmpleado);
}

void Empleado::setFechaIngreso(int dia, int mes, int anio)
{	
	_fechaIngreso = to_string(mes) + "/" + to_string(dia) + "/" + to_string(anio);
}

string Empleado::getFechaIngreso()
{
	return string(_fechaIngreso);
}
