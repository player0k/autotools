/** 
	@file 
	@mainpage Hello world
	@page onewordtag Заголовок вашей страницы 
*/
#include <gsl/gsl_cdf.h>
#include <stdio.h>

/**
  Just print function
  @ref onewordtag
  @param bottom_tail Bottom tail
*/
void print(double bottom_tail) {
	printf("Area between [-1.96, 1.96] : %g\n", 1 - 2 * bottom_tail);
}

int main() {
	double a = -1.96;
	double bottom_tail = gsl_cdf_gaussian_P(a, a);
	print(bottom_tail);
	return 0;
}
