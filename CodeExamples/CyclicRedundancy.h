#include<bits/stdc++.h>
#include <iostream>

#pragma once

class CyclicRedundancy {
public:
    CyclicRedundancy() = default;
    std::string xor1(std::string a, std::string b);
    std::string mod2div(std::string divident, std::string divisor);
    void encodeData(std::string data, std::string key);

};

