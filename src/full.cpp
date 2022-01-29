#include "half.cpp"

class FullAdder {
private:
    Bit carry_in {0};
    Bit carry_out {0};
    Bit sum {0};
    HalfAdder halfadder1;
    HalfAdder halfadder2;
public:
    FullAdder() {}

    void add(Bit a, Bit b) {
        this->halfadder1.add(a, b);
        this->halfadder2.add(this->halfadder1.get_sum(), this->carry_in);
        this->sum = this->halfadder2.get_sum();
        this->carry_out = this->halfadder1.get_carry_out() | this->halfadder2.get_carry_out();
    }

    Bit get_sum() const {
        return this->sum;
    }

    Bit get_carry_out() const {
        return this->carry_out;
    }

    void set_carry_in(Bit carry_in) {
        this->carry_in = carry_in;
    }
};