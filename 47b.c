#include <stdio.h>
	int main()
{
	int num1=16;
	int num2;
	int sum1=0;
	int qaz1=0;
	float wsx1;
	int ygt1=0;
	num2 = 61;
	sum1 = num1 - num2;
	qaz1 = num1 * num2;
    wsx1 = (float)num1 / (float)num2;
	ygt1 = num1 + num2;
	printf("%d - %d = %d\n", num1, num2, sum1);
	printf("%d * %d = %d\n", num1, num2, qaz1);
	printf("%d / %d = %d\n", num1, num2, wsx1);
	printf("%d + %d = %d\n", num1, num2, ygt1);
 return 0;
}