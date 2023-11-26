#pragma once
#include "NumericalIntegration.hpp" 

class SimpsonIntegration : public NumericalIntegration { //��������� ����� TrapezoidalIntegration.h 
public:
	SimpsonIntegration(int numPoints, double step, double precision);

	double Calc(std::function<double(double)> f, double lowerBound, double upperBound) override;
};