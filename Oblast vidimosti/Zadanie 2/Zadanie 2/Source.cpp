#include <iostream>

namespace Addition {
	int add(int a, int b) {
		return a + b;
	}
}

namespace Subtraction {
	int subtract(int a, int b) {
		return a - b;
	}
}

namespace Multiplication {
	int multiply(int a, int b) {
		return a * b;
	}
}

namespace Division {
	int divide(int a, int b) {
		if (b == 0) {
			std::cerr << "Error: Division by zero!" << std::endl;
			return 0;
		}
		return a / b;
	}
}

int main() {
	int a = 10;
	int b = 5;

	std::cout << "Numbers: " << a << " and " << b << std::endl;

	std::cout << "Addition: " << Addition::add(a, b) << std::endl;
	std::cout << "Subtraction: " << Subtraction::subtract(a, b) << std::endl;
	std::cout << "Multiplication: " << Multiplication::multiply(a, b) << std::endl;
	std::cout << "Division: " << Division::divide(a, b) << std::endl;
	return 0;

}