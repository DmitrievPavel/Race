#include "boots.h"

boots::boots() {
    V = 6;
    t_dvij = 60;
    t_otd = 10;
    t_otdN = 5;
}

double boots::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    if (count_ost < 2) {
        return t + t_otd;
    }
    else {
        double t_ost = 0;
        for (int i = 2; i < count_ost; ++i) {
            t_ost += t_otdN;
        }
        return t + t_otd + t_ost;
    }
}