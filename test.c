#include <stdio.h>  //printf
#include <assert.h> //assert
#include <math.h> //fabs
#include "act_icma.h"

int main()
{
    double yf;
    yf = act_icma(2018,12,15, 2019,3,1, 2019,3,15, 4);
    assert( fabs(yf - 0.20547945) < 1e-8 );
    printf("%.8f\n", yf);
	return 0;
}
