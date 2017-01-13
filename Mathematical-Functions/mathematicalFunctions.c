/* Some mathematical algorithms and random stuff like that - lb809 - 13/01/2017 */
#include <stdio.h>


/* 	
 * greatestCommonDivisor function which returns the gcd, based on the two numbers.
 * The algorithm is based on Euclids Algorithm.
 */
int gcd(int m, int n) {
	if (n > m)
		gcd(n, m);
	else if (n == 0)
		return m;
	else 
		gcd(n, m - n);
}


int main() {

	printf("%d\n", gcd(14, 20));

	return 0;
}