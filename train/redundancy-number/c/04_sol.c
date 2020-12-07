#include <stdio.h>
#include <math.h>

#define FOUND 1
#define MISSING 0

long long redundancy_number(int n);
int is_redundant(int k);

int main() {
	printf("redundancy_number(6) = %d (should be 12)\n", redundancy_number(6));
	printf("redundancy_number(65) = %d (should be 66)\n", redundancy_number(65));
	printf("redundancy_number(858) = %d (should be 858)\n", redundancy_number(858));
	printf("redundancy_number(90) = %d (should be 90)\n", redundancy_number(90));
	printf("redundancy_number(8664239) = %d (should be 8664240)\n", redundancy_number(8664239));
	printf("redundancy_number(9124812) = %d (should be 9124812)\n", redundancy_number(9124812));
}


long long redundancy_number(int n)
{
	if (n <= 0)
		return n;
	// ================================
	// Implementation 01:
	// Bad because less readable code
	// ================================
	//int result = MISSING;
	//int i;
	//for (i=n; result==MISSING; ++i)
	//	result = is_redundant(i);
	//return i - 1;

	// ================================
	// Implementation 02:
	// Better (I think) using while
	// ================================
	int i = n;
	int result = is_redundant(i);
	while (result == MISSING) {
		i += 1;
		result = is_redundant(i);
	}
	return i;
}

int is_redundant(int k) {
	int sum = 1;
	int root = sqrt(k);
	int i, the_other_divisor;
	for (i=2; i<root; ++i) {
		if (k % i == 0) {
			the_other_divisor = k / i;
			sum += i + the_other_divisor;
		}
		if (sum > k)
			return FOUND;
	}

	if (k % root == 0) {
		the_other_divisor = k / root;
		if (the_other_divisor == root)
			sum += root;
		else
			sum += root + the_other_divisor;
	}

	if (sum > k)
		return FOUND;
	else
		return MISSING;
}
