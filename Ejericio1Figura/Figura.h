#pragma once
class Figura
{
private:
	double _ladoA;
	double _ladoB;
	double _altura;
public:
	void setladoA(double);
	double getladoA();
	void setLadoB(double);
	double getLadoB();
	void setAltura(double);
	double getAltura();

	void LeerDatosCuadrado();

	void MostrarDatosCuadrado();

	void LeerDatosRectangulo();

	void MostrarDatosRectangulo();

	void LeerDatosCircunferencia();

	void MostrarDatosCircunferencia();

	void LeerDatosTriangulo();

	void MostrarDatosTriangulo();

};

