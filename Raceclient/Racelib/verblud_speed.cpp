#include "verblud_speed.h"

verblud_speed::verblud_speed() {
    V = 40;
    t_dvij = 10;
    t_otd = 5;
    t_otd1 = 6.5;
    t_otdN = 8;
}

double verblud_speed::run(int S) {
    double t = S / V;
    double count_ost = t / t_dvij;
    if (count_ost < 1) {
        return t;
    }
    if (count_ost < 2) {
        return t + t_otd;
    }
    if (count_ost < 3) {
        return t + t_otd + t_otd1;
    }
    else {
        double t_ost = 0;
        for (int i = 3; i < count_ost; ++i) {
            t_ost += t_otdN;
        }
        return t + t_otd + t_otd1 + t_ost;
    }
}