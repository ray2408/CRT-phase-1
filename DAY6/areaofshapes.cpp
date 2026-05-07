#include <iostream>
using namespace std;

class area {
    int length;
    int width;
public:
    // Rectangle
    area(int a, int b) {
        cout << "The area of the rectangle is: " << a * b << endl;
    }
    // Square
    area(float s) {
        cout << "The area of the square is: " << s * s << endl;
    }
    // Circle
    area(float r, bool isCircle) { // Used bool to differentiate from square constructor
        cout << "The area of the circle is: " << 3.14159 * r * r << endl;
    }
};

int main() {
    // Calling different constructors
    area rect(5, 4);      // Calls area(int, int)
    area sq(4.0f);       // Calls area(float)
    area circ(3.0f, true); // Calls area(float, bool)

    return 0;
}
