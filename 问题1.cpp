#include <iostream>
#include <cmath>
using namespace std; 
class Vector {
private:
    double x, y;

public:
    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}

    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    void print() const {
        cout << "Vector的x：" <<   x   << "  "<<  "Vector的y: " << y << endl;
    }

    void dir() const {
        double magnitude = sqrt(x * x + y * y);
        cout <<  magnitude << endl;
    }
};

int main() {
    Vector vector1(3.0, 4.0);
    Vector vector2(1.0, 2.0);

    cout << "Vector 1: ";
    vector1.print();
    
    cout << "Vector 2: ";
    vector2.print();

    Vector vector3 = vector1.add(vector2);

    cout << "Vector 1 和 Vector 2的和: ";
    vector3.print();

    cout << "向量和的模长 ";
    vector3.dir();

    return 0;
}
