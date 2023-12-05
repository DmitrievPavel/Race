#pragma once
#include "ground.h"

class kentavr : public ground {
public:
    RACELIB_API kentavr();
    double RACELIB_API run(int S) override;
};