#ifndef FULL_ADDER_HPP
#define FULL_ADDER_HPP

#include "bit.hpp"
#include "half.hpp"

class FullAdder {
private:
    Bit carry_in {0};
    Bit carry_out {0};
    Bit sum {0};
    HalfAdder halfadder1;
    HalfAdder halfadder2;
public:
    void add(Bit a, Bit b);
    Bit get_sum() const { return this->sum; }
    Bit get_carry_out() const { return this->carry_out; }
    void set_carry_in(Bit carry_in) { this->carry_in = carry_in; }
};

#endif
