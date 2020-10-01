#pragma once
class Fecha
{
	int _d;
	int _m;
	int _a;
	void Reiniciar();
	void  Adelantar(int d, int m, int a);
	void normalizar();
	int dias(int mes);
public:
	Fecha();
	//void setDia(int);
	//int getDia();
	//void setMes(int);
	//int getMes();
	//void setAnio(int);
	//int getAnio();
	void imprimir();
};

