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



	double getAreaCuadrado(double lado);

	double getPerimetroCuadrado(double lado);

	double getAreaRectangulo(double ladoA, double ladoB);

	double getPerimetroRectangulo(double ladoA, double ladoB);

	double getAreaCircunferencia(double diametro, double radio);

	double getPerimetroCircunferencia(double diametro);

	double getPerimetroTriangulo(double ladoA,double base);

	double getAreaTriangulo(double base, double altura);


};

