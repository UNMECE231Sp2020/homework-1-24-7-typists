#include <stdio.h>
#include "my_complex.h"
#include "complex_fns.c"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*complex_fn[4])(Complex, Complex) = {add, sub, mult, div};
	double (*mag_phase_fn[2])(Complex) = {magnitude, phase};
	int i;
	for (i=0; i<4; i++){
		complex_fn[i](a, b);
	}
	for (i=0; i<2; i++){
		mag_phase_fn[i](a);
	}
	return 0;
}
