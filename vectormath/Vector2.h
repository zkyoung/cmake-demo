#pragma once

class Vector2
{
public:
	float x;
	float y;

public:
	Vector2();
	Vector2(float xy);
	Vector2(float x, float y);

	float Length() const;
	Vector2 Normalize() const;
};

Vector2 operator + (const Vector2 & a, const Vector2 & b);
Vector2 operator - (const Vector2 & a, const Vector2 & b);