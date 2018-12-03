#include "day3/fabric_cut.h"

#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <utility>
#include <vector>

using namespace fabcut;

namespace {
    std::vector<Claim> loadInputClaims();
    bool checkClaimIntegrity(const Claim& claim, const std::array<std::array<int, 1000>, 1000>& fabric);
}

int fabcut::squareInchMultiCoveredCount() {
    auto claims = loadInputClaims();

    // Initialize a 1000x1000 grid
    std::array<std::array<int, 1000>, 1000> fabric;
    std::array<int, 1000> temp;
    std::fill_n(std::begin(temp), 1000, 0);
    std::fill_n(std::begin(fabric), 1000, temp);

    std::set<std::pair<int, int>> multiCoveredInches;

    for (auto& claim : claims) {
        for (int i = claim.topMargin; i < claim.topMargin + claim.height; ++i) {
            for (int j = claim.leftMargin; j < claim.leftMargin + claim.width; ++j) {
                if (fabric[i][j] != 0) {
                    multiCoveredInches.insert(std::make_pair(i, j));
                } else {
                    fabric[i][j] = 1;
                }
            }
        }
    }

    return multiCoveredInches.size();
}

int fabcut::uniqueClaimId() {
    auto claims = loadInputClaims();

    // Initialize a 1000x1000 grid
    std::array<std::array<int, 1000>, 1000> fabric;
    std::array<int, 1000> temp;
    std::fill_n(std::begin(temp), 1000, 0);
    std::fill_n(std::begin(fabric), 1000, temp);

    for (auto& claim : claims) {
        for (int i = claim.topMargin; i < claim.topMargin + claim.height; ++i) {
            for (int j = claim.leftMargin; j < claim.leftMargin + claim.width; ++j) {
                if (fabric[i][j] == 0){
                    fabric[i][j] = claim.id;
                } else if (fabric[i][j] > 0) {
                    fabric[i][j] = -1;
                }
            }
        }
    }

    std::set<int> potentialClaimsId;
    for (auto& line : fabric) {
        for (auto& i : line) {
            if (i > 0) { potentialClaimsId.insert(i); }
        }
    }

    std::vector<Claim> potentialClaims;
    auto claimIdCheck = [&potentialClaimsId](const Claim& claim){
        return std::find(std::begin(potentialClaimsId), std::end(potentialClaimsId), claim.id) != std::end(potentialClaimsId);
    };
    std::copy_if(std::begin(claims), std::end(claims), std::back_inserter(potentialClaims), claimIdCheck);

    for (auto& potentialClaim : potentialClaims) {
        if (checkClaimIntegrity(potentialClaim, fabric) == true) {
            return potentialClaim.id;
        }
    }

    return 0;
}

namespace {
    bool checkClaimIntegrity(const Claim& claim, const std::array<std::array<int, 1000>, 1000>& fabric) {
        for (int i = claim.topMargin; i < claim.topMargin + claim.height; ++i) {
            for (int j = claim.leftMargin; j < claim.leftMargin + claim.width; ++j) {
                if (fabric[i][j] == -1) {return false;}
            }
        }
        return true;
    }

    std::vector<Claim> loadInputClaims() {
        auto fs = std::fstream("input.txt");
        std::vector<Claim> claims;

        for (std::string str; std::getline(fs, str);) {
            //std::cout << "Loading claim: " << str << "\n";
            auto ss = std::stringstream{str};
            int id, topMargin, leftMargin, width, height;
            ss.ignore(1, '#');
            ss >> id;
            ss.ignore(2, '@');
            ss.ignore(1, ' ');
            ss >> leftMargin;
            ss.ignore(1, ',');
            ss >> topMargin;
            ss.ignore(2, ' ');
            ss >> width;
            ss.ignore(1, 'x');
            ss >> height;
            claims.push_back({id, topMargin, leftMargin, width, height});
            auto claim = claims.back();
            //std::cout << "Loaded claim with id: " << claim.id <<
            //                        " topMargin: " << claim.topMargin <<
            //                       " leftMargin: " << claim.leftMargin <<
            //                             " size: " << claim.width << "x" << claim.height << "\n";
        }
        return claims;
    }
}
