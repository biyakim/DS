#include <stdio.h>
#define R 3

int b[R];

void RePerint(void) {
	for (int i = 0; i < R; i++) {
		printf("%5d", b[i]);
	}
	printf("\n");
}

void RePermutation(int a[], int n, int r) {
	int i;
	if (r == R)RePerint();
	else for (i = 0; i < n; i++) {
					b[r] = a[i];
					RePermutation(a, n, r + 1);
	}
}

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	RePermutation(a, n, 0);

	return 0;
}