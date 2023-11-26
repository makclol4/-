#include "SimpsonIntegration.hpp"
//МЕТОД СИМПСОНА
SimpsonIntegration::SimpsonIntegration(int numPoints, double step, double precision) //конструктор класса
	: NumericalIntegration(numPoints, step, precision) {} //конструктор базового класса

double SimpsonIntegration::Calc(std::function<double(double)> f, double lowerBound, double upperBound) {
	double integral = 0;
	
	if (numPoints % 2 != 0) { //проверка на чётность
		numPoints += 1;
	}

	double h = (upperBound - lowerBound) / numPoints; //шаг

	for (int i = 0; i < numPoints; i += 2) {
		double x1 = lowerBound + i * h;
		double x2 = lowerBound + (i + 1) * h;
		double x3 = lowerBound + (i + 2) * h;

		integral += (f(x1) + 4 * f(x2) + f(x3)) * h / 3;
	}

	return integral;
}