#include <math.h>
#include <stdio.h>

class Hamming {

public:
    int input[32];
    int code[32];
    Hamming() = default;

    int ham_calc(int, int);
    void solve(int);

};


