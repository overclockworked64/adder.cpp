#include "bit.cpp"

class HalfAdder {
private:
    Bit sum {0};
    Bit carry_out {0};    
public:
    HalfAdder() {}

    void add(Bit a, Bit b) {
        this->carry_out = a & b;
        this->sum = a ^ b;
    };

    Bit get_sum() const {
        return this->sum;
    }

    Bit get_carry_out() const {
        return this->carry_out;
    }
};