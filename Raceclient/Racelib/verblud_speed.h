#pragma once
#include "ground.h"

class verblud_speed : public ground {
protected:
    double t_otd1, t_otdN;
public:
    RACELIB_API verblud_speed();
    double RACELIB_API run(int S) override;
};