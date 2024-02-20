#include <iostream>
#include "Vector3D.h"

using namespace std;

int main() {

	Vector3D v1, v2;

    cout << "Enter coordinates for vector 1:" << endl;
    v1.Read();

 
    cout << "Enter coordinates for vector 2:" << endl;
    v2.Read();

    cout << "Vector 1: ";
    v1.Display();
    cout << "Vector 2: ";
    v2.Display();

    if (v1.equals(v2)) {
        cout << "Equal!" << endl;
    }
    else {
        cout << "No equals!" << endl;
    }

    
    double length = v1.len_vector(v1.GetX(), v1.GetY(), v1.GetZ());
    cout << "Len vector v1: " << length << endl;
    double length_2 = v2.len_vector(v2.GetX(), v2.GetY(), v2.GetZ());
    cout << "Len vector v2: " << length_2 << endl;

    double scalar = 2.5;
    Vector3D v3 = v1.dobutok_on_scalar(scalar);
    cout << "The result of multiplying vector 1 by scalar " << scalar << " is: ";
    v3.Display();


    Vector3D v4 = v2.dobutok_on_scalar(scalar);
    cout << "The result of multiplying vector 2 by scalar " << scalar << " is: ";
    v4.Display();


    if (v1.len_equals(v2)) {
        cout << "Len equal!" << endl;
    }
    else {
        cout << "Len no equal!" << endl;
    }

    cout << "Vector 1: " << v1.toString() << endl;

	return 0;
}