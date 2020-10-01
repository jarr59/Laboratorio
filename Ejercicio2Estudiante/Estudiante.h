#pragma once
#include <string>
#include <string.h>
#include <string>
using namespace std;

class Estudiante
{
private:
	
	string _carnet;
	string _nombre;
	string _materia;
	float _promedioUno;
	float _promedioDos;
	float _promedioTres;
public:
	void setCarnet(string);
	string getCarnet();
	void setNombre(string);
	string getNombre();
	void setMateria(string);
	string getMateria();
	void setPromedio(double,double,double);
	double getPromedio();
	int ValidarNotasPromedio(double, double, double);
	Estudiante();
	~Estudiante();
};

