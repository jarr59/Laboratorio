// Ejercicio3Empleado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
#include <iostream>
#include <list>
#include "Empleado.h"
#include <stdlib.h>
#include <conio.h>

int main()
{
	Empleado emp;
	int op = 0, contador = 0, dia = 0, mes = 0, anio = 0;
	string fechaingreso;
	string nombre;
	string idmpleado;

	while (op != 3)
	{
		system("cls");
		cout << "BIENVENIDO QUE ACCION DESEA REALIZAR" << endl;
		cout << "\nIngrese la opcion a realizar" << endl;
		cout << "\n1 - Ingresar Empleado" << endl;
		cout << "\n2 - Ver Empleados" << endl;
		cout << "\n3 - Salir" << endl;
		cout << "\nOpcion elegida: "; cin >> op;
		switch (op)
		{
		case 1:
			if (contador < 5)
			{
				system("cls");
				cin.clear();
				cout << "\nBienvenido al Registro de un Empleado."<< endl;
				cout << "\nIngrese el Id del Empleado: "; cin >> idmpleado;
				cout << "\nIngrese el Nombre: "; cin >> nombre;
				cout << "\nIngrese la Fecha de Ingreso" << endl;
				cout << "\nDia: "; cin >> dia;
				cout << "\nMes: "; cin >> mes;
				cout << "\nAnio: "; cin >> anio;
				while (anio < 1900 || anio  > 2020 || anio == 0)
				{
					cout << "\nAnio valido: 1900 - 2020";
					cout << "\nIngrese el Anio: ";
					cin >> anio;
				}
				while (mes > 12 || mes < 1)
				{
					cout << "\nMeses valido: 1 - 12";
					cout << "\nIngrese el Mes: "; cin >> mes;
				}
				while (dia > 31 || dia < 1)
				{
					cout << "\nIngrese un dia valido: 1 - 31";
					cout << "\nIngrese el dia: "; cin >> dia;
				}
				emp.leerDatos(contador, idmpleado, nombre, dia, mes, anio);
				contador++;
				cout << "\nRegistro creado con exito"<< endl;
				cout << "\nPresione una tecla para volver al menu" << endl;
				_getch();
			}
			else
			{
				system("cls");
				cout << "**************AVISO******************\n" << endl;
				cout << "\nYa no puedes agragar mas registros\n" <<endl;
				cout << "Presione una tecla para volver al menu" << endl;
				_getch();
			}	
			break;
		case 2:
			
			if (contador == 0)
			{
				system("cls");
				cout << "**************AVISO******************\n";
				cout << "\n Todavia no hay registros" << endl;
				cout << "\nPresione una tecla para volver al menu" << endl;;
				_getch();
			}
			else
			{
				cin.clear();
				system("cls");
				cout << "Datos del empleado" << endl;
				for (int i = 0; i < contador; i++)
				{
					emp.verDatosEmpleado(idmpleado, nombre, fechaingreso,i);
					cout << "***************************" << endl;
					cout << "\nId: " << idmpleado << endl;
					cout << "\nNombre: " << nombre << endl;
					cout << "\nFecha Ingreso: " << fechaingreso << endl;
					cout << "\n***************************" << endl;
				}
				cout << "\nPresione una tecla para volver al menu" << endl;
				_getch();
			}
			
			break;
		default:
			cout << "\nElija una opcion valida";
			break;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
