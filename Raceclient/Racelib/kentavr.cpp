#include "kentavr.h"

kentavr::kentavr() {
    V = 15;
    t_dvij = 8;
    t_otd = 2;
}

double kentavr::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    else {
        double t_ost = 0;
        for (int i = 1; i < count_ost; ++i) {
            t_ost += t_otd;
        }
        return t + t_ost;
    }
}