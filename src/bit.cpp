#include "bit.hpp"

Bit Bit::operator&(Bit other) const {
    return Bit { this->bit & other.bit };
}

Bit Bit::operator^(Bit other) const {
    return Bit { this->bit ^ other.bit };
}

Bit Bit::operator|(Bit other) const {
    return Bit { this->bit | other.bit };
}

bool Bit::operator==(Bit other) const {
    return this->bit == other.bit;
}
