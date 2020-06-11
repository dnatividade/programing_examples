#include <stdio.h>
#include "example.h"

int main(void) {
	Data x;
	x.a = 4;
	x.b = 2;

	printf("SUM of (%f + %f) = %f\n", x.a, x.b, sum(x));
	printf("SUB of (%f - %f) = %f\n", x.a, x.b, sub(x));
	printf("MUL of (%f * %f) = %f\n", x.a, x.b, mul(x));
	printf("DIV of (%f / %f) = %f\n", x.a, x.b, div(x));

	return 0;
}

