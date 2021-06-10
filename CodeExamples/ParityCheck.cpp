//
// Created by sormocs on 6/9/21.
//

#include "ParityCheck.h"

ParityCheck* ParityCheck::instance = nullptr;

ParityCheck* ParityCheck::getInstance() {

    if (instance == nullptr){
        instance = new ParityCheck;
    }
    return instance;

}

bool ParityCheck::GetParity(unsigned int n) {

    unsigned int num = n;
    bool parity = false;
    while (n)
    {
        parity = !parity;
        n     = n & (n - 1);
    }
    std::cout << "Parity of no " << num << (parity?" :odd" : " :even") << std::endl;

    return parity;
}
