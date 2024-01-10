int power(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	
	if (exponent % 2 == 0) {
		// b^n = (b^2)^(n/2) --- b^n = (b^k)^m, if n = k*m
		return power(base * base, exponent / 2);
	}
	
	// b^n = (b^1)*((b^2)^((n-1)/2)) --- b^n = (b^k)*(b^m), if n = k+m
	return base * power(base * base, (exponent - 1) / 2);
}

int test_power_mainSuccess() {
	return
		power(2, 3) == 8 &&
		power(3, 4) == 81
	;
}