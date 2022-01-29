#include <array>
#include "ripple.hpp"

struct Overflow {};

void RippleCarryAdder::add(int a, int b) {
    for (int i = 0; i < this->adders.size(); i++) {
        Bit bit1 = Bit { (a >> i) & 1 };
        Bit bit2 = Bit { (b >> i) & 1 };
        this->adders[i].add(bit1, bit2);

        if (i == this->adders.size() - 1) {
            if (this->adders[i].get_carry_out() == Bit { 1 }) {
                throw Overflow {};
            }
        } else {
            this->adders[i+1].set_carry_in(this->adders[i].get_carry_out());
        }
    }
}

int RippleCarryAdder::get_result() {
    int result = 0;
    for (int i = this->adders.size() - 1; i >= 0; i--) {
        result <<= 1;
        result |= this->adders[i].get_sum().bit;
    }
    return result;
}
