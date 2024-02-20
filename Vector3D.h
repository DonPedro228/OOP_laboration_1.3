#pragma once
#include <string>
#include <sstream>
using namespace std;

class Vector3D
{
private:
	double x;
	double y;
	double z;
public:
	Vector3D(double x_val, double y_val, double z_val): x(x_val), y(y_val), z(z_val) {}
	Vector3D() : x(0), y(0), z(0) {}

	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }

	void SerX(double value) { x = value; }
	void SerY(double value) { y = value; }
	void SerZ(double value) { z = value; }

	void Init(double a, double b, double c);
	void Read();
	void Display() const;

	Vector3D dobutok_on_scalar(double scalar) const;
	bool equals(const Vector3D& other) const;
	double len_vector(double x, double y, double z) const;
	bool len_equals(const Vector3D& other) const;
	string toString() const;
	
	bool operator==(const Vector3D& other) const {
		return (x == other.x && y == other.y && z == other.z);
	}
};