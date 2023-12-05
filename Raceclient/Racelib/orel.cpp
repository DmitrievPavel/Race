#include "orel.h"

orel::orel() {
    V = 8;
}

double orel::run(int S) {
    int pers = 6;
    double realS = static_cast<double> (S - ((S * pers) / 100));
    return realS / V;
}