#include <iostream>
#include <memory>
#include <cstdlib>

#include "adder.hpp"

int main(int argc, char** argv) {
	std::cout << "hello, world!" << std::endl;

	utils::Adder a = utils::Adder();
	std::cout << a.addTwoInts(4, 5) << std::endl;
	
	std::shared_ptr<utils::Adder> a_ptr = std::make_shared<utils::Adder>();
	int result = a_ptr->addTwoInts(10, 11);

	std::cout << result << std::endl;

	return 0;
}
