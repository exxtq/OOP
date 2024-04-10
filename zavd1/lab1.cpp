#include <iostream>

class Cross {
    int a;
    int b;

public:
    Cross() : a(0), b(0) {}

    Cross(int a_val, int b_val) : a(a_val), b(b_val) {}

    int getA() const { return a; }
    void setA(int a_val) { a = a_val; }
    int getB() const { return b; }
    void setB(int b_val) { b = b_val; }

    int calculateArea() const { return a * b; }

    void print() const {
        std::cout << "A: " << a << ", B: " << b << ", Ploshha: " << calculateArea() << std::endl;
    }
};

int main() {
    Cross cross1(3, 4);
    cross1.print();

    cross1.setA(7);
    cross1.setB(9);
    cross1.print();
    return 0;
}
