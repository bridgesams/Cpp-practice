#include <iostream>
using namespace std;

class Rectangle {
	int length, breadth;
public:
	Rectangle() { length = breadth = 0; }
	void setDimensions(int,int);
	int displayDimensions();
	int area();
	int perimeter();
	bool isSquare();
};

void Rectangle::setDimensions(int l, int b) {
	length = l;
	breadth = b;
}

int Rectangle::displayDimensions() {
	cout << "\nThe Length of the rectangle you have inputted is " << length << " and the breadth is " << breadth << ".";
}

int Rectangle::area() {
	return length * breadth;
}

int Rectangle::perimeter() {
	return 2 * (length + breadth);
}

bool Rectangle::isSquare() {
	if (length == breadth)
		return true;
	else
		return false;
}

//DRIVER CODE

int main() {
	int l, b;
	cout << "Enter the Length: ";
	cin >> l;
	cout << "Enter the Breadth: ";
	cin >> b;
	Rectangle r;
	r.setDimensions(l, b);
	r.displayDimensions();
	cout << "\nThe area is: ";
	cout << r.area();
	cout << "\nThe perimeter is: ";
	cout << r.perimeter();
	if (r.isSquare())
		cout << "\nThe rectangle is indeed a square.";
	else
		cout << "\nThe rectangle is not a square.";
}