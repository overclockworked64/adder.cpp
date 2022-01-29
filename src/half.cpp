#include "half.hpp"

void HalfAdder::add(Bit a, Bit b) {
    this->carry_out = a & b;
    this->sum = a ^ b;
};