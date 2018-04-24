#include <iostream>
#include "Vector.h"
#include <string>
#include <vector>


/**********************************************************************
A general-purpose function to intepolate between two values by a 
specified  proportion.
***********************************************************************/

/**********************************
float lerp(float start, float end, float proportion)
{
	return start + (end - start) * proportion;
}

double lerp(double start, double end, double proportion)
{
	return start + (end - start) * proportion;
}

int lerp(int start, int end, int proportion)
{
	return start + (end - start) * proportion;
}

Vector lerp(const Vector & start, const Vector & end, float proportion)
{
	return start + (end - start) * proportion;
}

*************************************/



template<typename T>
T lerp(T start, T end, float proportion)
{
	return start + (end - start) * proportion;
}



using MyVector = Vector<float>;

int main()
{



	float canberra = 0;
	float goulburn = 80;
	float sydney = 300;

	float proportion = 0.5f;
//	float distance = goulburn + (sydney - goulburn) * proportion;

	float distance = lerp(goulburn, sydney, 0.5f);

	double dist = lerp(3.6, 9.9, 0.3f);




	MyVector v1(1,2,3);
	MyVector v2(4, 5, 6);
	MyVector v3 = lerp(v1, v2, 0.3f);






	std::cout << distance;

	system("pause");

}