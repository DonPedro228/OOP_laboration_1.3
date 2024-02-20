#include "Vector3D.h"
#include <cmath>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;



void Vector3D::Init(double a, double b, double c)
{
	this->x = a;
	this->y = b;
	this->z = c;
}


void Vector3D::Read()
{
	cout << "Input x: "; cin >> x;
	cout << "Input y: "; cin >> y;
	cout << "Input z: "; cin >> z;
}
	
void Vector3D::Display() const
{
	cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}


string Vector3D::toString() const
{
	stringstream sout;

	sout << "x: " << x << endl;
	sout << "y: " << y << endl;
	sout << "z: " << z << endl;

	return sout.str();
}

Vector3D Vector3D::dobutok_on_scalar(double scalar) const
{
	return Vector3D(x * scalar, y * scalar, z * scalar);
}

bool Vector3D::equals(const Vector3D& other) const
{
	return (x == other.x && y == other.y && z == other.z);
}

double Vector3D::len_vector(double x, double y, double z) const
{
	double length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return length;
}

bool Vector3D::len_equals(const Vector3D& other) const
{
	return len_vector(x, y, z) == other.len_vector(other.x, other.y, other.z);
}


