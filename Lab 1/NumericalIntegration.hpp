#pragma once
#include <cmath>
#include <functional>

class NumericalIntegration {
protected:
	int numPoints;  //количество точек
	double step; //шаг
	double precision; //точность интегрирования

public:
	NumericalIntegration(int numPoints, double step, double precision) //конструктор 
		: numPoints(numPoints), step(step), precision(precision) {}\

	virtual double Calc(std::function<double(double)> f, double lowerBound, double upperBound) = 0; //эта функция будет реализованна в наследнике
};