#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double x1, y1, x2, y2, x3, y3, x4, y4;

    // corners of the triangle
    x1 = 0;
    y1 = 100;
    x2 = 200;
    y2 = 0;

    // Origin
    x3 = 0;
    y3 = 0;

    // point to discover if in or out of triangle
    cout << "Enter a point's x- and y-coordinate: ";
    cin >> x4 >> y4;
    // Assign the point values to variables to match cramer's rule
    double a = y1 - y2;
    double b = x2 - x1;
    double c = y3 - y4;
    double d = x4 - x3;
    double e = (y1 - y2)*x1 - (x1 - x2) * y1;
    double f = (y3 - y4)*x3 - (x3 - x4) * y3;

    // Cramer's rule
    // It will give me the intersection point of 2 lines
    double  x = (e*d - b*f) / (a*d - b*c);
    double  y = (a*f - e*c) / (a*d - b*c);

    // now check the distance between origin and this intersection point and then compare with the point
    // if distance from origin to the point is less than the point of intersection then the point is inside of the triangle
    // if distance from origin to the point is greater than the point of intersection the the point is outside of the triangle
    // distance formula
    double distIntersection = sqrt(pow(x - x3, 2.0) + pow(y - y3, 2.0));
    double distPoint = sqrt(pow(x4 - x3, 2.0) + pow(y4 - y3, 2.0));

    // check if distance to the point if less or greater than the intersection
    cout << "Dist Inter: " << distIntersection << endl;
    cout << "Dist Point: " << distPoint << endl;

    if (distPoint <= distIntersection) {
        cout << "Point is inside the triangle\n";
    }
    else
        cout << "Point is outside of the triangle\n";
    return 0;
}
