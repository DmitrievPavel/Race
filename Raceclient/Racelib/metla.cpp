#include "metla.h"

metla::metla() {
    V = 20;
}

double metla::run(int S) {
    int pers = S / 1000;
    if (pers >= 1) {
        double realS = static_cast<double> (S - ((S * pers) / 100));
        return realS / V;
    }
    else {
        return S / V;
    }
}