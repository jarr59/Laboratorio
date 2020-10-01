// Ejericio1Figura.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Figura.h"
using namespace std;
int main()
{
	Figura figura;
	double ladoA = 0,ladoB = 0,diametro = 0,radio = 0,base = 0,altura = 0;
	int op = 0;
	while (op != 5)
	{
		cout << "\nBienvenido al calculador de areas y perimetros" << endl;
		cout << "1 - Cuadrado" << endl;
		cout << "2 - Rectangulo" << endl;
		cout << "3 - Circunferencia" << endl;
		cout << "4 - Triangulo" << endl;
		cout << "5 - Salir" << endl;
		cout << "Opcion elegida: "; cin >> op;
		switch (op)
		{
		case 1:	
			system("cls");
			cout << "\nCalcular el perimetro y area de un cuadrado" << endl;
			cout << "\nIngrese un lado del cuadrado: "; cin >> ladoA;	
			while (ladoA < 1)
			{
				cout << "\nIngrese un lado del cuadrado: "; cin >> ladoA;
			}
			figura.setladoA(ladoA);
			cout << "\nPerimetro: " << defaultfloat << figura.getPerimetroCuadrado(figura.getladoA()) << endl;
			cout << "\nArea: " << defaultfloat << figura.getAreaCuadrado(figura.getladoA()) << endl;
			break;
		case 2:	
			system("cls");
			cout << "\nCalcular el perimetro y area de un rectangulo" << endl;
			cout << "\nIngrese el lado A: "; cin >> ladoA;
			cout << "\nIngrese el lado B: "; cin >> ladoB;
			if (ladoA < 1 || ladoB < 1)
			{
				cout << "Ingrese numero positivos" << endl;
				while (ladoA < 1)
				{
					cout << "\nIngrese el lado A: "; cin >> ladoA;
				}	
				while (ladoB < 1)
				{
					cout << "\nIngrese el lado B: "; cin >> ladoB;
				}				
			}
			figura.setLadoB(ladoB);
			figura.setladoA(ladoA);
			cout << "\nPerimetro: " << figura.getPerimetroRectangulo(figura.getladoA(),figura.getLadoB()) << endl;
			cout << "\nArea: " << figura.getAreaRectangulo(ladoA,ladoB)<< endl;
			break;
		case 3:
			system("cls");
			cout << "\nCalcular perimetro y area de una circunferencia" << endl;
			cout << "\nIngrese el diametro: "; cin >> diametro;
			cout << "\nIngrese el radio: "; cin >> radio;
			if (diametro < 1 || radio < 1)
			{
				cout << "Ingrese numero positivos" << endl;
				while (diametro < 1)
				{
					cout << "\nIngrese el diametro: "; cin >> diametro;
				}
				while (radio < 1)
				{
					cout << "\nIngrese el radio: "; cin >> radio;
				}
			}
			figura.setladoA(diametro);
			figura.setLadoB(radio);
			cout << "\nPerimetro: " << figura.getPerimetroCircunferencia(figura.getladoA()) << endl;
			cout << "\nArea: " << figura.getAreaCircunferencia(figura.getladoA(),figura.getLadoB()) << endl;
			break;
		case 4:
			system("cls");
			cout << "\nCalcular area y perimetro de un triangulo Isósceles" << endl;
			cout << "\nIngrese el lado A o B: "; cin >> ladoA;
			cout << "\nIngrese la base: "; cin >> base;
			cout << "\nIngrese la altura: "; cin >> altura;
			if (ladoA < 1 || base < 1 || altura < 1)
			{
				cout << "Ingrese numero positivos" << endl;
				while (ladoA < 1)
				{
					cout << "\nIngrese el lado A o B: "; cin >> ladoA;
				}
				while (base < 1)
				{
					cout << "\nIngrese la base: "; cin >> base;
				}
				while (altura < 1)
				{
					cout << "\nIngrese la altura: "; cin >> altura;
				}		
			}			
			figura.setladoA(ladoA);
			figura.setLadoB(base);
			figura.setAltura(altura);
			cout << "\nPerimetro: " << figura.getPerimetroTriangulo(figura.getladoA(),figura.getLadoB()) << endl;
			cout << "\nArea: " << figura.getAreaTriangulo(figura.getLadoB() ,figura.getAltura()) << endl;
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
