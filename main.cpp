#include "Practice.h";

int main()
{
	// Get user input for two vectors
	double x1, y1, x2, y2;

	cout << "Enter the x and y components of the first Vector " << endl;
	cin >> x1 >> y1;

	cout << "Enter the x and y components of the second Vector " << endl;
	cin >> x2 >> y2;

	// Initialize the vectors 
	Vector2D vector1(x1, y1);
	Vector2D vector2(x2, y2);

	// Add the two vectors together using the overloaded + operator
	Vector2D resultVector = vector1 + vector2;

}