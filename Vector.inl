template<typename T>
Vector<T> Vector<T>::operator-(const Vector & rhs) const
{
	Vector out(x, y, z);

	out.x -= rhs.x;
	out.y -= rhs.y;
	out.z -= rhs.z;

	return out;
}

template<typename T>
Vector<T> Vector<T>::operator+(const Vector & rhs) const
{
	Vector out(x, y, z);

	out.x += rhs.x;
	out.y += rhs.y;
	out.z += rhs.z;

	return out;
}

template<typename T>
Vector<T> Vector<T>::operator*(float value) const
{
	Vector out(x, y, z);

	out.x *= value;
	out.y *= value;
	out.z *= value;

	return out;
}


