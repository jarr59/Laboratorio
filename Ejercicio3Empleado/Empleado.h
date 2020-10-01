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
public:
	void setNombre(string);
	string getNombre();
	void setIdEmpleado(string);
	string getIdEmpleado();
	void setFechaIngreso(int dia, int mes, int anio);
	string getFechaIngreso();

	Empleado();
	~Empleado();

	void leerDatos(int contador, string id, string nombre, int dia, int mes, int año);
	void verDatos();
	void verDatosEmpleado(string& idempleado, string& nombre, string& fechaingreso,int &iter);
	
	
};

