#include "TrapezoidalIntegration.hpp"
//МЕТОД ТРАПЕЦИЙ
TrapezoidalIntegration::TrapezoidalIntegration(int numPoints, double step, double precision) //конструктор класса
	: NumericalIntegration( numPoints,  step,  precision) {} //конструктор базового класса

double TrapezoidalIntegration::Calc(std::function<double(double)> f, double lowerBound, double upperBound) {
	double integral = 0;
	double x = lowerBound;

	for (int i = 0; i < numPoints; ++i) {
		double y1 = f(x);
		double y2 = f(x + step);
		integral += 0.5 * step * (y1 + y2); //сумма площадей трапеций 
		x += step;
	}
	return integral;
}