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
	}//10���� �۰ų� ���� ���� �� Ȧ���� ���ϱ�. 

	printf("%d\n", sum);
	return 0;
}