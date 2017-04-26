#include <stdio.h>


	int main (void) {

	double q1, q2, q3, q4;
	double v1, v2;

	scanf("%lf %lf", &v1, &v2);

	if (v1 == 0 || v2 == 0)
		printf("Origem\n");	
	else
	if (v1 > 0 && v2 > 0) 
		printf("Q1\n");	
	else
	if (v1 < 0 && v2 > 0)
		printf("Q2\n");
	else
	if (v1 < 0 && v2 < 0)
		printf("Q3\n");
	else
	if (v1 > 0 && v2 < 0)
		printf("Q4\n");
	


return 0;
}
