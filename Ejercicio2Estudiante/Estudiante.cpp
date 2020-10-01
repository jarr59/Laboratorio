#pragma warning(disable : 4996)
#include "Estudiante.h"
#include <iostream>
#include <cstdio>
static float promedioFinal;
using namespace std;

Estudiante::Estudiante()
{  
}
Estudiante::~Estudiante()
{}
void Estudiante::setCarnet(string carnet)
{
    _carnet = carnet;
}
string Estudiante::getCarnet()
{
    return string(_carnet);
}
void Estudiante::setNombre(string nombre) 
{
    _nombre = nombre;
}
string Estudiante::getNombre()
{
    return string(_nombre);
}
void Estudiante::setMateria(string materia)
{
    _materia = materia;
}
string Estudiante::getMateria()
{
    return string(_materia);
}
void Estudiante::setPromedio(double p1, double p2, double p3)
{
    _promedioUno = p1 * 0.30;
    _promedioDos = p2 * 0.30;
    _promedioTres = p3 * 0.40;
}
double Estudiante::getPromedio()
{
    return (_promedioUno + _promedioDos + _promedioTres);
}
int Estudiante::ValidarNotasPromedio(double p1, double p2, double p3)
{
    if (p1 > 10 || p1 < 0)
        return 1;
    
    if (p2 > 10 || p2 < 0)
            return 2;
    
    if (p3 > 10 || p3 < 0)
        return 3;

    return 0;
}


