#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("a = ");
	scanf("%i", &a);
	printf("\nb = ");
	scanf("%i", &b);
	printf("\nc = ");
	scanf("%i", &c);
	if (((pow(a, 2)) == (pow(b, 2) + (pow(c, 2)))) || ((pow(b, 2)) == (pow(a, 2) + (pow(c, 2)))) || ((pow(c, 2)) == (pow(b, 2) + (pow(a, 2)))))
		printf("\nTrue");
	else
		printf("\nFalse");
}