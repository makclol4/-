#include <iostream>
#include <cmath>
# define M_PI 3.14159265358979323846

template<class T>
class Point {
public:

	T x, y, z;

	Point(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}
};

template<class T>
class Vector {
public:
	T x, y, z;

	Vector(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}

	Vector(const Point<T>& p1, const Point<T>& p2) {
		x = p2.x - p1.x;
		y = p2.y - p1.y;
		z = p2.z - p1.z;
	}

	Vector<T> operator+ (const Vector<T>& other) const {
		return Vector<T>(x + other.x, y + other.y, z + other.z);
	}

	Vector<T> operator- (const Vector<T>& other) const {
		return Vector<T>(x - other.x, y - other.y, z - other.z);
	}

	Vector<T> operator- () const {
		return Vector<T>(-x, -y, -z);
	}

	Vector<T> normalized() const { //нормализация вектора 
		T length = sqrt(x * x + y * y + z * z);
		return Vector<T>(x / length, y / length, z / length);
	}

	T dotProduct(const Vector<T>& other) const { //скалярное произведение 
		return x * other.x + y * other.y + z * other.z;
	}

	Vector<T> crossProduct(const Vector<T>& other) const { //векторное произведение 
		return Vector<T>(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
	}

	T length() const { //длина вектора 
		return sqrt(x * x + y * y + z * z);
	}

	bool isCollinear(const Vector<T>& other) const { //проверка на коллинеарность (лежат на одной прямой или на параллельных)
		Vector<T> normolizedThis = normalized();
		Vector<T> normolizedOther = other.normalized();
		return normolizedThis.dotProduct(normolizedOther) == 1 || normolizedThis.dotProduct(normolizedOther) == -1; 
	}

	bool isCoplanar(const Vector<T>& v1, const Vector<T>& v2) const { //проверка на копланарность (смешанное произведение рано нулю)
		return crossProduct(v1).dotProduct(v2) == 0;
	}

	T distance(const Vector<T>& other) const { //расстоянеие 
		return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2) + pow(z - other.z, 2));
	}

	T angle(const Vector<T>& other) const { //угол между нормальными векторами
		Vector<T> normolizedThis = normalized();
		Vector<T> normolizedOther = other.normalized();
		double dotProduct = normolizedThis.dotProduct(normolizedOther);
		return acos(dotProduct) * 180 / M_PI;
	}
};

int main() {
	double x, y, z;
	std::cout << "Enter V1 (x,y,z) "; //считываем вектор 1
	std::cin >> x >> y >> z;
	Vector<double> v1(x, y, z);

	std::cout << "Enter V2 (x,y,z) ";//считываем вектор 2
	std::cin >> x >> y >> z;
	Vector<double> v2(x, y, z);

	std::cout << "Length V1: " << v1.length() << std::endl; //выводим длину вектора 1

	Vector<double> v3 = v1 + v2;
	std::cout << "Additional V1 and V2: (" << v3.x << ", " << v3.y << ", " << v3.z << ")" << std::endl; //выводим сумму вектора 1 и 2

	Vector<double> v4 = -v1;
	std::cout << "Reverse V1: (" << v4.x << ", " << v4.y << ", " << v4.z << ")" << std::endl; //выводим вектор обратный к вектору 1

	double angle = v1.angle(v2);
	std::cout << "Angle between V1 and V2: " << angle << "degrees" << std::endl; //выводим угол между векторами 1 и 2 в градусах

	std::cout << "Enter V5 (x,y,z) "; //считываем вектор 5
	std::cin >> x >> y >> z;
	Vector<double> v5(x, y, z);

	std::cout << "Enter V6 (x,y,z) ";//считываем вектор 6
	std::cin >> x >> y >> z;
	Vector<double> v6(x, y, z);

	std::cout << "Enter V7 (x,y,z) ";//считываем вектор 7
	std::cin >> x >> y >> z;
	Vector<double> v7(x, y, z);

	bool isCoplanar = v5.isCoplanar(v6, v7);
	std::cout << "Vectors V5, V6, V7 coplanar: " << std::boolalpha << isCoplanar << std::endl; //выводим копланарные ли вектора 5, 6 и 7

	std::cout << "Enter V8 (x,y,z) ";//считываем вектор 8
	std::cin >> x >> y >> z;
	Vector<double> v8(x, y, z);

	std::cout << "Enter V9 (x,y,z) ";//считываем вектор 9
	std::cin >> x >> y >> z;
	Vector<double> v9(x, y, z);

	bool isCollinear = v8.isCollinear(v9);
	std::cout << "Vectors V8 and V9 collinear: " << std::boolalpha << isCollinear << std::endl; //выводим коллинеарны ли вектора 8 и 9
}