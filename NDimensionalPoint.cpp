#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
class Point
{
private:
	int dim = 0;
	double* coordinates;
	int color;
public:
	Point(int dimension){
		dim = dimension;
		coordinates = new double[dim];
	}
	~Point(){
		delete[] coordinates;
	}

	double distance(Point &other)
	{
		double sum = 0;
		
		for (int i = 0; i < max(other.getDimension(), getDimension()); i++)
		{
			sum += pow(((i< other.getDimension() ? other.getNthCoordinate(i) : 0) - (i < getDimension() ? this->getNthCoordinate(i) : 0 )), 2);
		}
		return sqrt(sum);
	}

	void setCoordinates(double* newCoords)
	{
		for (int i = 0; i < dim; i++)
			coordinates[i] = newCoords[i];
	}

	//counting starts at 0
	void setNthCoordinate(double coord, int n)
	{
		if (dim < n)
			coordinates[n] = coord;
	}
	//counting starts at 0
	double getNthCoordinate(int n)
	{
		return coordinates[n];
	}


	const double* getCoordinates()
	{
		return coordinates;
	}

	int getDimension(){ return dim; }

	void setColor(int color)
	{
		if (color >= 0 && color < 255 * 255 * 255)
			this->color = color;
	}
	int getColor(){ return color; }
};

int main()
{
	Point sample1(3);
	Point sample2(3);
	double coords1[] = { 5, 4, 12 };
	double coords2[] = { -3, 5, 24};
	sample1.setCoordinates(coords1);
	sample2.setCoordinates(coords2);
	cout << sample1.distance(sample2);

	system("pause");


	return 0;
}



