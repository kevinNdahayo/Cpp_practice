#include "Practice.h";

class Vector2D {
	private:
		double x;
		double y;

	public:

		// Constructor function to initialize the vector
		Vector2D(double x, double y) {
			this->x = x;
			this->y = y;
		};

		// Getters and Setters
		double getX() {
			return x;
		};
		double getY() {
			return y;
		};
		void setX(double x) {
			this->x = x;
		};	
		void setY(double y) {
			this->y = y;
		};

		// Operator overloading for vector addition meaning we can add two vectors together
		Vector2D operator+(const Vector2D& rightHandVector) {

			double newX = this->x + rightHandVector.x;
			double newY = this->y + rightHandVector.y;

			cout << "Adding the two vectors together: " << endl;
			cout << "Old Vector has x: " << this->x << " and y: " << this->y << endl;
			cout << "The new Vector has x: " << newX << " and y: " << newY << endl;
			return Vector2D(newX, newY);
		};

};

