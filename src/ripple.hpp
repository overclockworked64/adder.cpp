#ifndef RIPPLE_ADDER
#define RIPPLE_ADDER

#include <array>
#include "full.hpp"

class RippleCarryAdder {
private:
    std::array<FullAdder, 8> adders;
public:
    RippleCarryAdder() {}
    void add(int a, int b);
    int get_result() const;
};

#endif