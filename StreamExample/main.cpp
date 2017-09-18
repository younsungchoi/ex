// first main function
#include <stdio.h>
#include <iostream>
#include <fstream>

namespace my_val
{
	int a;
	int b;

	void print()
	{
		printf("%d %d", a, b);
	}
}

struct Vector2D
{
	int x;
	int y;

	void print()
	{
		printf("%d %d", x, y);
	}
};

void main()
{

	Vector2D my_vector;

	my_vector.x = 1;
	my_vector.y = 2;

	my_vector.print();

	printf("kk");

	using namespace std;
	cout << endl;
	cout <<  my_vector.x << endl;

	std::ofstream ofile("cppstyle.txt");
	ofile << my_vector.x << endl;
}