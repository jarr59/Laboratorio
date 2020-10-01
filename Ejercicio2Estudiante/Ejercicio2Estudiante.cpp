// Ejercicio2Estudiante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Estudiante.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	string carnet="",nombre="",materia="";
	double promediouno=0, promediodos=0, promediotres=0;
	int validacionpromedio = 0;
	char op = ' ';
	Estudiante estudiante;
	while (true)
	{
		system("cls");
		cout << "\nIngreso los siguientes datos del alumno\n";
		cout << "\nCarnet: "; cin >> carnet;
		estudiante.setCarnet(carnet);
		cout << "\nNombre: "; cin >> nombre;
		estudiante.setNombre(nombre);
		cout << "\nMateria: "; cin >> materia;
		estudiante.setMateria(materia);
		cout << "\nPrimer Promedio: "; cin >> promediouno;
		cout << "\nSegundo Promedio: ", cin >> promediodos;
		cout << "\nTercer Promedio: ", cin >> promediotres;
		validacionpromedio=estudiante.ValidarNotasPromedio(promediouno, promediodos, promediotres);
		while ( validacionpromedio != 0)
		{
			cout << "\nEl promedio tiene que ser mayor o igual a 0 y menor a 10\n";
			switch (validacionpromedio)
			{
			case 1:				
				cout << "\nPrimer Promedio: "; cin >> (promediouno);
				break;
			case 2:
				cout << "\nSegundo Promedio: ", cin >> (promediodos);
				break;
			case 3:
				cout << "\nTercer Promedio: ", cin >> (promediotres);
			default:
				break;
			}
			validacionpromedio = estudiante.ValidarNotasPromedio(promediouno, promediodos, promediotres);
		}
		estudiante.setPromedio(promediouno, promediodos, promediotres);

		cout << "\nDATOS DEL ALUMNO" << endl;
		cout << "\nCarnet: " << estudiante.getCarnet() << endl;
		cout << "\nIngrese Nombre: " << estudiante.getNombre() << endl;
		cout << "\nIngrese Materia: " << estudiante.getMateria() << endl;
		if (estudiante.getPromedio() > 6)
		{
			cout << "\nPromedio Final: " << defaultfloat << estudiante.getPromedio() << endl;
			cout << "\nEstado: Aprovado\n";
		}
		else
		{
			cout << "\nPromedio Final: " << defaultfloat << estudiante.getPromedio() << endl;
			cout << "\nEstado: Reprobado\n";
		}
		cout << "\n5Ingrese cualquier letra para introducir otro alumno";
		cout << "\nIngrese [s] para salir: "; cin >> op;
		
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
