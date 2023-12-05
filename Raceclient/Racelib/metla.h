#pragma once
#include "fly.h"

class metla : public fly {
public:
    RACELIB_API metla();
    double RACELIB_API run(int S) override;
};