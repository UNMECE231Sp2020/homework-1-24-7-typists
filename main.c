#include <stdio.h>
#include "my_complex.h"
//#include "complex_fns.c"


int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex c = {0, 0};
	Complex (*complex_fn[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};

	double (*mag_phase_fn[2])(Complex) = {magnitude, phase};

	int i;
	printf("\n");
		

// Create array of function pointers, and call the fucntions directly.

	Complex output1;
	for (i=0; i<4; i++){
		output1 = complex_fn[i](a, b);
		printf("real; %lf     imag; %lf\n", output1.real, output1.imag);
	}

	double output2 [2];
	for (i=0; i<2; i++){
		output2[i] = mag_phase_fn[i](a); 
	}
	printf("mag; %lf     phase; %lf\n", output2[0], output2[1]);
	printf("\n");


// Now, we are going to call the functions through the function handler in my_complex.h.

	hdlr1(complex_add, a, b);
	hdlr1(complex_sub, a, b);
	hdlr1(complex_mult, a, b);
	hdlr1(complex_div, a, b);
	hdlr2(magnitude, a);
	hdlr2(phase, a);
	printf("\n");


// Checking for the "divide by zero" error.

	for (i=0; i<4; i++){
		output1 = complex_fn[i](a, c);
		printf("real; %lf     imag; %lf\n", output1.real, output1.imag);
	}
	printf("\n");


	return 0;
}

