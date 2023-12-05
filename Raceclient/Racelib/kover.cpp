#include "kover.h"

kover::kover() {
    V = 10;
}

double kover::run(int S) {
    int pers = 0;
    if (S < 1000) {
        pers = 0;
    }
    if (S > 1000 && S < 5000) {
        pers = 3;
    }
    if (S > 5000 && S < 10000) {
        pers = 10;
    }
    if (S >= 10000) {
        pers = 5;
    }
    double realS = static_cast<double> (S - ((S * pers) / 100));
    return realS / V;
}