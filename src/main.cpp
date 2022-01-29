#include <iostream>
#include "ripple.hpp"

int main() {
    RippleCarryAdder adder;
    adder.add(127, 129);

    std::cout << adder.get_result() << std::endl;
}
