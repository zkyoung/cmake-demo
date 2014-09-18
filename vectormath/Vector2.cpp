#include "Vector2.h"
#include <cmath>

Vector2::Vector2()
{
	x = y = 0.0f;
}

Vector2::Vector2(float xy)
{
	x = y = xy;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Vector2::Length() const
{
	return sqrtf(x*x + y*y);
}

Vector2 Vector2::Normalize() const
{
	Vector2 res;

	float length = Length();
	res.x = x / length;
	res.y = y / length;

	return res;
}

Vector2 operator + (const Vector2 & a, const Vector2 & b)
{
	Vector2 res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;

	return res;
}

Vector2 operator - (const Vector2 & a, const Vector2 & b)
{
	Vector2 res;

	res.x = a.x - b.y;
	res.y = a.y - b.y;

	return res;
}