#include <iostream>
#include "NumericalIntegration.hpp"
#include "SimpsonIntegration.hpp"
#include "TrapezoidalIntegration.hpp"

double f(double x) {
	//return x * x;
	return x * x * x;
}

int main() 
{
	int numPoints = 1000;
	double step = 1.0 / numPoints;
	double precision = 0.0001;

	NumericalIntegration* trapezoidal = new TrapezoidalIntegration(numPoints, step, precision);
	NumericalIntegration* simpson = new SimpsonIntegration(numPoints, step, precision);

	double lowerBound = 0;
	double upperBound = 1;

	double integralTrap = trapezoidal->Calc(f, lowerBound, upperBound);
	double integralSimp = simpson->Calc(f, lowerBound, upperBound);

	std::cout << "Trapezoidal result: " << integralTrap << std::endl;
	std::cout << "Simpson result: " << integralSimp << std::endl;

	delete trapezoidal;
	delete simpson;
}