#include "example.h"

double sum(Data x);
double sub(Data x);
double mul(Data x);
double div(Data x);

double sum(Data x) {
	return x.a + x.b;
}

double sub(Data x) {
	return x.a - x.b;
}

double mul(Data x) {
	return x.a * x.b;
}

double div(Data x) {
	return x.a / x.b;
}

