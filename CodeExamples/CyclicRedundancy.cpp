#include "CyclicRedundancy.h"

std::string CyclicRedundancy::xor1(std::string a, std::string b) {

    // Initialize result
    std::string result = "";

    int n = b.length();

    for(int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            result += "0";
        else
            result += "1";
    }
    return result;
}

std::string CyclicRedundancy::mod2div(std::string divident, std::string divisor)
{

    // Number of bits to be XORed at a time.
    int pick = divisor.length();

    // Slicing the divident to appropriate
    // length for particular step
    std::string tmp = divident.substr(0, pick);

    int n = divident.length();

    while (pick < n)
    {
        if (tmp[0] == '1')

            tmp = xor1(divisor, tmp) + divident[pick];
        else

            tmp = xor1(std::string(pick, '0'), tmp) +
                  divident[pick];

        pick += 1;
    }


    if (tmp[0] == '1')
        tmp = xor1(divisor, tmp);
    else
        tmp = xor1(std::string(pick, '0'), tmp);

    return tmp;
}

void CyclicRedundancy::encodeData(std::string data, std::string key)
{
    int l_key = key.length();

    // Appends n-1 zeroes at end of data
    std::string appended_data = (data +
                            std::string(
                                    l_key - 1, '0'));

    std::string remainder = mod2div(appended_data, key);

    // Append remainder in the original data
    std::string codeword = data + remainder;
    std::cout << "Remainder : " << remainder << std::endl;
    std::cout << "Encoded Data (Data + Remainder) :" << codeword << std::endl;
}

// This code is contributed by MuskanKalra1 (geeksforgeeks).
