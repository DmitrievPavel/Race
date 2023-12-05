#pragma once
#include "fly.h"

class kover : public fly {
public:
    RACELIB_API kover();
    double RACELIB_API run(int S) override;
};
