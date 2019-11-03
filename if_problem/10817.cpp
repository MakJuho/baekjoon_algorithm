#include<stdio.h>



void swap(int* ary) {
	int tmp;

	if (ary[0] < ary[1]) {
		tmp = ary[1];
		ary[1] = ary[0];
		ary[0] = tmp;
	}
	if (ary[0] < ary[2]) {
		tmp = ary[2];
		ary[2] = ary[0];
		ary[0] = tmp;
	}
	if (ary[1] < ary[2]) {
		tmp = ary[2];
		ary[2] = ary[1];
		ary[1] = tmp;
	}

}

int main()
{
	
	int A, B, C;
	int ary[3];

	scanf("%d %d %d", &A, &B, &C);

	ary[0] = A;
	ary[1] = B;
	ary[2] = C;
	swap(ary);
	
	printf("%d", ary[1]);

	return 0;
}