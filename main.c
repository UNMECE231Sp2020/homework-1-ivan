#include <stdio.h>
#include "my_complex.h"

int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*fun[4])(Complex c1, Complex c2) = {complex_add, complex_sub, complex_mult, complex_div};

	double (*dub_fun[2])(Complex c) = {magnitude, phase};

	int x;
	for(x=0; x<4; x++){
		complex_hdlr(fun[x], a, b);
	}

	for(x=0; x<2; x++){
		double_hdlr(dub_fun[x], a);							double_hdlr(dub_fun[x], b);	
	}

	return 0;
}
