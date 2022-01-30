#ifndef BIT_HPP
#define BIT_HPP

struct Bit {
    int bit;

    Bit operator&(Bit other) const {
        return Bit { this->bit & other.bit };
    }

    Bit operator^(Bit other) const {
        return Bit { this->bit ^ other.bit };
    }

    Bit operator|(Bit other) const {
        return Bit { this->bit | other.bit };
    }

    bool operator==(Bit other) const {
        return this->bit == other.bit;
    }
};

#endif
