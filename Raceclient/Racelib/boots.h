#pragma once
#include "ground.h"

class boots : public ground {
protected:
    double t_otd, t_otdN;
public:
    RACELIB_API boots();
    double RACELIB_API run(int S) override;
};