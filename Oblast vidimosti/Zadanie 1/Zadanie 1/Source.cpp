#include <iostream>

int counting_function() {
	static int count = 0;
	count++;

	std::cout << "Колличество вызовов функции: " << count << std::endl;
	return count;
}

int main() {
	for (int i = 0; i < 15; i++) {
		counting_function();
	}
	return 0;
}