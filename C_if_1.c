#include <stdio.h>

int main(void)
{
	int a = 1, sum = 0;

	printf("%d\n", sum);

	while (a <= 10) {
		if (a % 2 == 1) {
			sum += a;
		}
		a++;
	}//10보다 작거나 같은 정수 중 홀수를 더하기. 

	printf("%d\n", sum);
	return 0;
}