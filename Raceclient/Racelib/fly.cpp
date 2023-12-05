#include "fly.h"

fly::fly() {
    V = 0;
}

double fly::run(int S) {
    return S / V;
}