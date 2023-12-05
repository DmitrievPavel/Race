#include "verblud.h"

verblud::verblud() {
    V = 10;
    t_dvij = 30;
    t_otd = 5;
    t_otd1 = 8;
}
double verblud::run(int S) {
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
            t_ost += t_otd1;
        }
        return t + t_otd + t_ost;
    }
}