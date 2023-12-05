#pragma once
#include "ground.h"
class verblud : public ground {
protected:
    double t_otd1;
public:
    RACELIB_API verblud();
    double RACELIB_API run(int S) override;
};