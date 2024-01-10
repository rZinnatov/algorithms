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

// -------------- TESTS --------------

int test_leastCommonMultiple_mainSuccess() {
    return
        lcm(16, 20) == 80 &&
        lcm(20, 16) == 80 &&
        lcm(5, 3) == 15 &&
        lcm(3, 5) == 15 &&
        lcm(12, 8) == 24 &&
        lcm(8, 12) == 24
    ;
}