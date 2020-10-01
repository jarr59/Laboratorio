// Ejercicio3Empleado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
#include <iostream>
#include <list>
#include "Empleado.h"

int main()
{
    Empleado* emp = new Empleado();
	int op = 0;

	while (op != 3)
	{
		cout << "\nIngrese la opcion a realizar";
		cout << "\n1 - Ingresar Empleado";
		cout << "\n2 - Ver Empleados";
		cout << "\n3 - Salir";
		cout << "\nOpcion elegida: "; cin >> op;
		switch (op)
		{
		case 1:
			emp->leerDatos();
			break;
		case 2:
			emp->verDatos();
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
