#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double radius;
    const double PI = 3.14159265358979323846;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    double circleArea = PI * pow(radius, 2);
    double circlePerimeter = 2 * PI * radius;

    cout << "Circle Results:" << endl;
    cout << "Area: " << circleArea << endl;
    cout << "Perimeter (Circumference): " << circlePerimeter << endl;


    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double rectangleArea = length * width;
    double rectanglePerimeter = 2 * (length + width);

    cout << "Rectangle Results:" << endl;
    cout << "Area: " << rectangleArea << endl;
    cout << "Perimeter: " << rectanglePerimeter << endl;

    return 0;
}