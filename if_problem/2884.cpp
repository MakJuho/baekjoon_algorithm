#include<stdio.h>

int main()
{

	int H, M, total;

	scanf("%d %d", &H, &M);

	total = H * 60 + M;

	if (total < 45) {
		total += 24 * 60;
	}

	total -= 45;

	H = total / 60;
	M = total % 60;
	if (M == 0) {
		printf("%d\n", H);
	}
	else {
		printf("%d %d\n", H, M);
	}
	return 0;
}