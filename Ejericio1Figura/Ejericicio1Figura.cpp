// Ejericio1Figura.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Figura.h"
using namespace std;
int main()
{
	Figura figura;
	int op = 0;
	while (op != 5)
	{
		cout << "\nBienvenido al calculador de areas y perimetros" << endl;
		cout << "1 - Cuadrado" << endl;
		cout << "2 - Rectangulo" << endl;
		cout << "3 - Circunferencia" << endl;
		cout << "4 - Triangulo" << endl;
		cout << "Opcion elegida: "; cin >> op;
		switch (op)
		{
		case 1:
			figura.LeerDatosCuadrado();
			figura.MostrarDatosCuadrado();
			break;
		case 2:
			figura.LeerDatosRectangulo();
			figura.MostrarDatosRectangulo();
			break;
		case 3:
			figura.LeerDatosCircunferencia();
			figura.MostrarDatosCircunferencia();
			break;
		case 4:
			figura.LeerDatosTriangulo();
			figura.LeerDatosTriangulo();
		default:
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
