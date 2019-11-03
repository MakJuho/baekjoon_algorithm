#include<stdio.h>

int pibonacci(int n) {
	if (n < 2) {
		return 1;
	}
	else {
		return n* pibonacci(n - 1);
	}

}

int main()
{
	int N;
	scanf("%d", &N);

	printf("%d", pibonacci(N));
	return 0;
}