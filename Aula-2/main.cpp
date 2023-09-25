#include <iostream>
#include <string>

using namespace std;

class Square {
	float x, y;
	float side;
public:
	Square(float x, float y, float side) {
		this->x = x;
		this->y = y;
		this->side = side;
	}
	float perimeter() {
		return side * 4;
	}
	float area() {
		return side * side;
	}
	void move(float dx, float dy) {
		x += dx;
		y += dy;
	}
	float compareWith(Square s) {
		return side - s.side;
	}
	bool containsPoint(double pointX, double pointY) {
		float halfSide = side / 2;
		return abs(pointX - x) <= halfSide && abs(pointY - y) <= halfSide;
	}
};


int main()
{
	float x, y, side;
	cout << "Introduza as coordenadas do centro (X Y): ";
	cin >> x >> y;
	cout << "Introduza o lado: ";
	cin >> side;
	Square s(x, y, side);

	cout << "\tPerimetro = " << s.perimeter() << endl;

	cout << "\t'Area = " << s.area() << endl;

	cout << "Introduza o deslocamento (X Y): ";
	cin >> x >> y;
	s.move(x, y);

	cout << "Introduza as coordenadas do centro (X Y): ";
	cin >> x >> y;
	cout << "Introduza o lado: ";
	cin >> side;
	Square s2(x, y, side);
	string relation = s.compareWith(s2) > 0 ? "maior" : "menor";
	cout << "O primeiro quadrado e' " << relation << " que o segundo\n";

	return 0;
}
