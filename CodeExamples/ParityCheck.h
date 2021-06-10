#include <iostream>

#pragma once

class ParityCheck {
private:
    static ParityCheck* instance;
    ParityCheck() = default;
public:

    static ParityCheck* getInstance();
    bool GetParity(unsigned int);

};

