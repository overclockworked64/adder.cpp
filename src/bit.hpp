#ifndef BIT
#define BIT

struct Bit {
    int bit;
    Bit operator&(Bit other) const;
    Bit operator^(Bit other) const;
    Bit operator|(Bit other) const;
    bool operator==(Bit other) const;
};

#endif