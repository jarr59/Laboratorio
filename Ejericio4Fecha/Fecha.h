#pragma once
class Fecha
{
	int _d;
	int _m;
	int _a;
	int dias(int mes);
public:
	Fecha();
	void Reiniciar();
	void  Adelantar(int d, int m, int a);
	void Atrasar(int d, int m, int a);
	void normalizar();
	//void setDia(int);
	//int getDia();
	//void setMes(int);
	//int getMes();
	//void setAnio(int);
	//int getAnio();
	void imprimir();
	void IngresarFecha(int d, int m, int a);
};

