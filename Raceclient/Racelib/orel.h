#pragma once
#include "fly.h"

class orel : public fly {
public:
    RACELIB_API orel();
    double RACELIB_API run(int S) override;
};