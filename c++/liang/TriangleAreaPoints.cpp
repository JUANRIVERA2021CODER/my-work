#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x1, y1, x2, y2, x3, y3;

	cout << "Enter three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double side1 = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
	double side2 = sqrt(pow(x3 - x2, 2.0) + pow(y3 - y2, 2.0));
	double side3 = sqrt(pow(x3 - x1, 2.0) + pow(y3 - y1, 2.0));
	double s = (side1 + side2 + side3) / 2.0;

	double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	cout << "The area of the triangle is " << area << endl;
	

	return 0;
}
