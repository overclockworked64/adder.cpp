#include <iostream>
#include "ripple.cpp"

int main() {
    RippleCarryAdder adder;
    adder.add(127, 129);

    std::cout << adder.get_result() << std::endl;
}