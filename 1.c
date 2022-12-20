#include <stdio.h>
#include <math.h>

int main()
{
	/*My first message*/
	double x = 0.357;
	double y = 2.031;
	double equation = pow(x, cos(y)) - pow(tan(x), sqrt(y - x)) - 19.12 * log(pow(y, 3));
	printf("x = %.3lf\ny = %.3lf\n\n", x, y);
	printf("Result of equation: %.3lf", equation);
	return 0;
}
