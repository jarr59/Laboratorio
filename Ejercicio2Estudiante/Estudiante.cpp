#pragma warning(disable : 4996)
#include "Estudiante.h"
#include <iostream>
#include <cstdio>
static float promedioFinal;
using namespace std;

float Estudiante::CalcularNotas(float promediouno, float promediodos, float promediotres)
{
    promedioFinal = ((promediouno * 0.30) + (promediodos * 0.30) + (promediotres * 0.40));
    
    return promedioFinal;
}

Estudiante::Estudiante()
{  
    strcpy(_carnet, " ");
    strcpy(_nombre, " ");
    strcpy(_materia, " ");
    _promedioUno = 0;
    _promedioDos = 0;
    _promedioTres = 0;
    fflush(stdin);
}
Estudiante::~Estudiante()
{}
void Estudiante::MostarMenu()
{
    char op = ' ';
    while (op != 's')
    {
        IngresarAlumno();
        MostrarAlumno();
        cout << "\n5Ingrese cualquier letra para introducir otro alumno";
        cout << "\nIngrese [s] para salir: "; cin >> op;
    }
}
void Estudiante::IngresarAlumno()
{
    system("cls");
    fflush(stdin);
    cout << "\nIngreso de datos del alumno\n";
    cout << "\nIngrese Nombre: "; cin >> (_nombre);
    cout << "\nIngrese Carnet: "; cin >> (_carnet);
    cout << "\nIngrese Materia: "; cin >> (_materia);
    ValidarNotasPromedio();
    cout << "\nIngrese los Promedios \n";
}
void Estudiante::MostrarAlumno()
{
    system("cls");
    cout << "\n Datos del alunmo\n";
    cout << "\nCarnet: " << _carnet << "\n";
    cout << "\nNombre: " << _nombre << "\n";
    cout << "\nMateria: " << _materia << "\n";
    ValidacionEstadoPromedio();

}
void Estudiante::ValidarNotasPromedio()
{
    
    cout << "\nPrimer Promedio: "; cin >> (_promedioUno);
    cout << "\nSegundo Promedio: ", cin >> (_promedioDos);
    cout << "\nTercer Promedio: ", cin >> (_promedioTres);

    while (_promedioUno > 10 || _promedioUno < 0)
    {
        cout << "\nEl promedio tiene que ser mayor a 0 igual y menor a 10\n";
        cout << "\nPrimer Promedio: "; cin >> (_promedioUno);
    }
    while (_promedioDos > 10 || _promedioDos < 0)
    {
        cout << "\nEl promedio tiene que ser mayor a 0 igual y menor a 10\n";
        cout << "\nSegundo Promedio: ", cin >> (_promedioDos);
    }
    while (_promedioTres > 10 || _promedioTres < 0)
    {
        cout << "\nEl promedio tiene que ser mayor a 0 igual y menor a 10\n";
        cout << "\nTercer Promedio: ", cin >> (_promedioTres);
    } 
    CalcularNotas(_promedioUno, _promedioDos, _promedioTres);
}
void Estudiante::ValidacionEstadoPromedio()
{
    if (promedioFinal > 6)
    {
        cout << "\nPromedio Final: " << defaultfloat << promedioFinal << "\n";
        cout << "\nEstado: Aprovado\n";
    }
    else
    {
        cout << "\nPromedio Final: " << defaultfloat << promedioFinal;
        cout << "\nEstado: Reprobado\n";
    }

}

