#include "ground.h"

ground::ground() {
	V = 0;
	t_dvij = 0;
}
double ground::run(int S) {
	return S / V;
}