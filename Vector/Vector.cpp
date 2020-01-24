// Vector.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector.h"
using std::cout;
using std::endl;

int main()
{
	int x1 = 1, y1 = 2, z1 = 4;
	int x2 = 6, y2 = 9, z2 = 7;
	int numeromult = 3;

	cout << "multiplicacion de X: " << (x1 * numeromult) << endl;
	cout << "multiplicacion de y: " << (y1 * numeromult) << endl;
	cout << "multiplicacion de z: " << (z1 * numeromult) << endl;

	cout << "suma de X: " << (x1 + x2) << endl;
	cout << "suma de y: " << (y1 + y2) << endl;
	cout << "suma de z: " << (z1 + z2) << endl;

	cout << "resta de X: " << (x1 - x2) << endl;
	cout << "resta de y: " << (y1 - y2) << endl;
	cout << "resta de z: " << (z1 - z2) << endl;

	cout << "producto punto: " << x1 * x2 + y1 * y2 + z1 * z2 << endl;

	cout << "producto cruz: " << (y1 * z2 - z1 * y2) + (x1 * z2 - z1 * x2) + (x1 * y2 - y1 * x2) << endl;

    cout << "Hello World!\n";
}


Vector3::Vector3()
{
	x = y = z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
float Vector3::GetX()
{
	return x;
}
float Vector3::GetY()
{
	return y;
}
float Vector3::GetZ()
{
	return z;
}

void Vector3::SetY(float y)
{
	this->y = y;
}
void Vector3::SetX(float x)
{
	this->x = x;
}
void Vector3::SetZ(float z)
{
	this->z = z;
}

Vector3 Vector3::operator+(Vector3 v2)
{
	Vector3 temp;
	temp.SetX(x + v2.GetX());
	temp.SetY(y + v2.GetY());
	temp.SetZ(z + v2.GetZ());
	return temp;
}

Vector3 Vector3::operator-(Vector3 v2)
{
	Vector3 temp;
	temp.SetX(x - v2.GetX());
	temp.SetY(y - v2.GetY());
	temp.SetZ(z - v2.GetZ());
	return temp;
}

float Vector3::operator*(Vector3 v2)
{
	float temp;
	temp = x * v2.GetX() + y * v2.GetY() + z * v2.GetZ();
	return temp;
}

float Vector3::operator%(Vector3 v2)
{
	float temp;
	temp = (y * v2.GetZ() - z * v2.GetY()) - (x * v2.GetZ() - z * v2.GetX()) + (x * v2.GetY() - y * v2.GetX());
	return temp;
}

Vector3 Vector3::operator*(float esc)
{
	Vector3 temp;
	temp.SetX(x * esc);
	temp.SetY(y * esc);
	temp.SetZ(z * esc);
	return temp;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
