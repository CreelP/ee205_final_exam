#include <iostream>

class Shape {
public:
    double compute_area();

};

class Rectangle : public Shape {
protected:
    double length;
    double  width;
public:
    Rectangle(newLength newWidth) {
        if(newLength && newWidth <= 0) {
            std::cout << "length and width must be > 0" << endl;
        }
        return true;

    };

};

class Square : public Rectangle {
public:
    Square(const Square &newSide) : newSide(newSide) {
    };
    getSide();
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    return 0;
}
