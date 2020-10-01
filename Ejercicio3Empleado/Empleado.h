#pragma once
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
#include <string>
#include <string.h>
using namespace std;

class Empleado
{
private:
	string _nombre;
	string _idEmpleado;
	string _fechaIngreso;
	int _año;
	int _mes;
	int _dia;
	void formatoFecha(int contad);
public:
	Empleado();
	~Empleado();
	void leerDatos();
	void verDatos();
	
	
};

