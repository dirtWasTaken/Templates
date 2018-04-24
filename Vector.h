#pragma once


template<typename T>
class Vector
{
public:

	T x, y, z;

	Vector(T x_, T y_, T z_)
	{
		x = x_;
		y = y_;
		z = z_;
	}

	Vector operator-(const Vector & rhs) const;

	Vector operator+(const Vector & rhs) const;

	Vector operator*(float value) const;
};


#include "Vector.inl"



