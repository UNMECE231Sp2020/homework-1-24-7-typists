#include <stdio.h>


struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c);


// Calls function in complex_fns with passed complex inputs.
// Returns a complex that contains real and imaginary parts.

void hdlr1(Complex (*fn_hdlr) (Complex, Complex), Complex input_one, Complex input_two);

// Calls function in complex_fns with one input. 
// Returns a double.

void hdlr2(double (*fn_hdlr) (Complex), Complex input_three);



Complex complex_add(Complex c1, Complex c2);
Complex complex_sub(Complex c1, Complex c2);
Complex complex_mult(Complex c1, Complex c2);
Complex complex_div(Complex c1, Complex c2);

Complex complex_conj(Complex c);


double magnitude(Complex c);
double phase(Complex c);

