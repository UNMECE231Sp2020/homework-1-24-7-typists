#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);



void hdlr1(Complex (*fn_hdlr) (Complex, Complex), Complex input_one, Complex input_two) {
	printf("%lf %lf", fn_hdlr(input_one, input_two).real, fn_hdlr(input_one, input_two).imag);
}

void hdlr2(Double (*fn_hdlr) (Complex), Complex input_three) {
	printf("%lf", fn_hdlr(input_three));
}



Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);

double magnitude(Complex c);
double phase(Complex c);
