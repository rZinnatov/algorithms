#include "LeastCommonMultiple.h"

// Greatest common divider
int euclidean_gcd(int a, int b) {
	if (a == 0) {
		return b;
	}
	if (b == 0) {
		return a;
	}
	
	int mod = 0;
	
	do {
		mod = a % b;
		a = b;
		b = mod;
	} while (mod != 0);
	
	return a;
}
// Least common multiple
int lcm(int a, int b) {
	return abs(a * b) / euclidean_gcd(a, b);
}
