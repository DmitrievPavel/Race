#pragma once
#include "Transport.h"

class fly : public transport {
public:
    fly();
    double run(int S) override;
};