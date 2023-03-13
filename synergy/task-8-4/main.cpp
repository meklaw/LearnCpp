#include <iostream>
#include <cmath>

using namespace std;

class Function {
public:
    virtual double calculate(double x) = 0;
    virtual void displayResult() = 0;
};

class Ellipse : public Function {
private:
    double a, b, y;
public:
    Ellipse(double a, double b) : a(a), b(b) {}

    double calculate(double x) {
        y = b * sqrt(1 - pow(x/a, 2));
        return y;
    }

    void displayResult() {
        cout << "Ellipse function: y = " << y << endl;
    }
};

class Hyperbola : public Function {
private:
    double a, b, y;
public:
    Hyperbola(double a, double b) : a(a), b(b) {}

    double calculate(double x) {
        y = b * sqrt(pow(x/a, 2) - 1);
        return y;
    }

    void displayResult() {
        cout << "Hyperbola function: y = " << y << endl;
    }
};

class Parabola : public Function {
private:
    double a, b, c, y;
public:
    Parabola(double a, double b, double c) : a(a), b(b), c(c) {}

    double calculate(double x) {
        y = a * pow(x, 2) + b * x + c;
        return y;
    }

    void displayResult() {
        cout << "Parabola function: y = " << y << endl;
    }
};

void callFunction(Function& f, double x) {
    double y = f.calculate(x);
    f.displayResult();
}

int main() {
    // Demonstration of virtual function calls
    Function* f1 = new Ellipse(2.0, 1.0);
    Function* f2 = new Hyperbola(2.0, 1.0);
    Function* f3 = new Parabola(1.0, 2.0, 1.0);

    f1->calculate(1.0);
    f1->displayResult();

    f2->calculate(1.0);
    f2->displayResult();

    f3->calculate(1.0);
    f3->displayResult();

    delete f1;
    delete f2;
    delete f3;

    // Demonstration of inference function
    Ellipse e(2.0, 1.0);
    callFunction(e, 1.0);

    return 0;
}
