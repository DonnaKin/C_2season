#include <stdio.h>

double getarea(double r);
double getcircum(double r);

double pi = 3.14;
int gi;

int main(void)
{
	double r = 5.87;
	const double pi = 3.141592;

	printf("면적: %.2f\n", getarea(r));
	printf("둘레: %.2f\n", 2 * pi*r);
	//printf("둘레: %.2f\n", getcircum(r));
	printf("둘레: %.2f\n", pi);
	printf("둘레: %.d\n",gi);
	return 0;
}

double getarea(double r)
{
	return r*r*pi;
}