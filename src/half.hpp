#ifndef HALF_ADDER_HPP
#define HALF_ADDER_HPP

#include "bit.hpp"

class HalfAdder {
private:
    Bit sum {0};
    Bit carry_out {0};    
public:
    Bit get_sum() const { return this->sum; }
    Bit get_carry_out() const { return this->carry_out; }
    void add(Bit a, Bit b);
};

#endif
