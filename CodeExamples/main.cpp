#include "ParityCheck.h"
#include "Hamming.h"
#include "CyclicRedundancy.h"
int main() {

    std::cout << "Parity:" << std::endl;
    ParityCheck::getInstance()->GetParity(7);

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    std::cout << "Hamming:" << std::endl;
    Hamming *hamming = new Hamming;
    hamming->input[0] = 0;
    hamming->input[1] = 1;
    hamming->input[2] = 1;
    hamming->input[3] = 1;

    int N = 4;
    hamming->solve(N);

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

    std::cout << "\nCyclic Redundancy Check:" << std::endl;
    CyclicRedundancy* cyclic = new CyclicRedundancy;

    std::string data = "100100";
    std::string key = "1101";

    cyclic->encodeData(data, key);

    return 0;
}

