#include "day3/fabric_cut.h"

#include <iostream>

int main() {
    std::cout << "Multi-covered square inches: " << fabcut::squareInchMultiCoveredCount() << "\n";
    std::cout << "Unique covered square inch by claim id: " << fabcut::uniqueClaimId() << "\n";
    return 0;
}
