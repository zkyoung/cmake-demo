#include "Common.h"

float Dot(const Vector2 & a, const Vector2 & b)
{
	return a.x*b.x + a.y*b.y;
}

float Distance(const Vector2 & a, const Vector2 & b)
{
	return (b - a).Length();
}