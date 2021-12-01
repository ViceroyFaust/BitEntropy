#include <cmath>
#include <iostream>
#include <unordered_set>

// Entropy formula is
// S = size, U = num of unique symbols
// bits entropy = Bs
// Bs = log2(U^S)
double calcBitsEntropy(const std::string& in) {
    std::unordered_set<char> chars;
    for (char c : in)
        chars.insert(c);
    double product = pow(chars.size(), in.size());
    double bitLog = log2(product);
    return bitLog;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}