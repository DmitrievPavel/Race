#pragma once
#include "Transport.h"
class ground : public transport {
protected:
    double t_otd;
public:
    ground();
    double run(int S) override;
};