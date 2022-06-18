#include <stdio.h>
#include <stdbool.h>

int count = 0;
bool is_prime(int n) {
	if (n%2 == 0) return false;

	for (int i = 3; i < n/2; i += 2) {
		if (n%i == 0) return false;
	}
	return true;
}

int main() {
	for (int i = 2; i < 1000000; i++) {
		if (is_prime(i)) count++; 
	}
	
	printf("%d primos encontrados\n", count);
	return 0;
}
