#pragma once

namespace fabcut {
    struct Claim {
        int id;
        int topMargin;
        int leftMargin;
        int width;
        int height;
    };


    int squareInchMultiCoveredCount();
    int uniqueClaimId();
}
