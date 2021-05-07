#include <stdio.h>

void gcd(int a, int b);

int main() {
	gcd(21, 21);

	return 0;

}

void gcd(int a, int b) {
	int i;
	
	if (a >= b) { b = a; a = b; }
	for ( i = a; i >= 1; i--)
	{
		if ((a % i) == 0 && (b % i) == 0) {
			printf("GCD=%d", i);
			break;
		}
	}
}
