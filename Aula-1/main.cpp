#include <cmath>
const double PI = acos(-1);

struct FloatXY {
	float x, y;
};

class Circle {
	FloatXY centre;
	float radio;
public:
	Circle(float radio) {
		centre = { 0, 0 };
		this->radio = radio;
	}
	Circle(const FloatXY* centre, float radio) {
		this->centre = *centre;
		this->radio = radio;
	}
	float perimeter() const {
		return (float)(2 * PI * radio);
	}
	float area() const {
		return (float)(PI * pow(radio, 2));
	}
	FloatXY move(FloatXY displacement) {
		centre.x += displacement.x;
		centre.y += displacement.y;
		return centre;
	}
	float resize(float zoom) {
		float new_radio = radio * zoom;
		if (new_radio > 0) {
			radio = new_radio;
			return radio;
		}
		return 0;
	}
	float distanceTo(const Circle* c) {
		float dx = centre.x - c->centre.x;
		float dy = centre.y - c->centre.y;
		float centersDistance = (float)sqrt(pow(dx, 2) + pow(dy, 2));
		return abs(centersDistance - radio - c->radio);
	}
};


#include <iostream>

using namespace std;

int main()
{
	FloatXY centre;
	float radio;

	cout << "Enter centre coordinates and radio (X Y radio): ";
	cin >> centre.x >> centre.y >> radio;
	Circle c(&centre, radio);
	cout << "\tPerimeter = " << c.perimeter() << endl;
	cout << "\t'Area = " << c.area() << endl;

	FloatXY d;
	cout << "Enter a displacement (X Y): ";
	cin >> d.x >> d.y;
	centre = c.move(d);
	cout << "\tNew position = " << centre.x << ", " << centre.y << endl;

	float zoom = 1;
	cout << "Enter an enlargement (>1) / reduction (<1) ratio: ";
	cin >> zoom;
	float new_radio = c.resize(zoom);
	if (new_radio > 0)
		cout << "\tNew radio = " << new_radio << endl;
	else
		cout << "\tZoom ratio produces an invalid radio!\n";

	cout << "Enter characteristics for another circle (X Y radio): ";
	cin >> centre.x >> centre.y >> radio;
	Circle c2(&centre, radio);
	cout << "The distance between circles' borders is "
		<< c.distanceTo(&c2) << endl;

	return 0;
}