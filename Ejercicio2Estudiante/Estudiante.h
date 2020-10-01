#pragma once
#include <string>
#include <string.h>
#include <string>
using namespace std;

class Estudiante
{
private:
	
	char _carnet[8];
	char _nombre[50];
	char _materia[20];
	float _promedioUno;
	float _promedioDos;
	float _promedioTres;
	float CalcularNotas(float promediouno, float promediodos, float promediotres);
	void ValidacionEstadoPromedio();
	void ValidarNotasPromedio();
	void IngresarAlumno();
	void MostrarAlumno();
public:
	Estudiante();
	~Estudiante();
	void MostarMenu();
	
	

};

