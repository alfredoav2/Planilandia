#pragma once

class Vector3
{
private:
	float x;
	float y;
	float z;

public:
	Vector3();
	Vector3(float x, float y, float z);
	float GetX();
	float GetY();
	float GetZ();
	void SetY(float y);
	void SetX(float x);
	void SetZ(float z);

	Vector3 operator+(Vector3 v2);
	Vector3 operator-(Vector3 v2);
	float operator*(Vector3 v2);
	float operator%(Vector3 v2);
	Vector3 operator*(float esc);
};