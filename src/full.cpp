#include "full.hpp"

void FullAdder::add(Bit a, Bit b) {
    this->halfadder1.add(a, b);
    this->halfadder2.add(this->halfadder1.get_sum(), this->carry_in);
    this->sum = this->halfadder2.get_sum();
    this->carry_out = this->halfadder1.get_carry_out() | this->halfadder2.get_carry_out();
}
