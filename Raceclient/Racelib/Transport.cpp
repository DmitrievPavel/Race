#include "transport.h"

transport::transport() {
    V = 0;
    t_dvij = 0;
}

double transport::run(int S) {
    return S / V;
}

