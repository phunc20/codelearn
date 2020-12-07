#include <stdio.h>
#include <math.h>

#define FOUND 1
#define MISSING 0

long long redundancy_number(int n);
int is_redundant(int k);

long long redundancy_number(int n)
{
	if (n <= 0)
		return n;

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
