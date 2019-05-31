#include <iostream>
#include <string>
class Complex {
private:
	double c1, c2;
	double x, y;
public:
	Complex() {
		x = 0;
		y = 0;
	}
	Complex(double c11, double c22) {
		c1 = c11;
		c2 = c22;
	}
	Complex(const Complex&copy) {

	}
	~Complex() {
		std::cout << "destructor"<< std::endl;
	}
	void cplx() {
		std::cout << "Enter real  :" << std::endl;
		std::cin >> c1;
		std::cout << "Enter imag :" << std::endl;
		std::cin >> c2;
		x = sqrt(pow(c1, 2) + pow(c2, 2));
		y = atan(c2 / c1);
		std::cout << "Your module " << x << std::endl;
		std::cout << "argument " << y << ";";
		std::cout << "\n";
	}

};
