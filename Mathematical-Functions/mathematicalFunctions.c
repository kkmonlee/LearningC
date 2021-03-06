/* Some mathematical algorithms and random stuff like that - lb809 - 13/01/2017 */
#include <stdio.h>

/* 	
 * greatestCommonDivisor function which returns the gcd, based on the two numbers.
 * The algorithm is based on Euclids Algorithm.
 * Complexity: O(log^2 N)
 */
int gcd(unsigned long long m, unsigned long long n) {
	if (m % n == 0) return n;
	return gcd(n, m % n);
}


int main() {

	printf("%d\n", gcd(247, 221));

	return 0;
}
