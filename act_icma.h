#ifndef ACT_ICMA_H
#define ACT_ICMA_H

#include "julianday/julianday.h"
#include "act_isda/act_isda.h"
#include <stdlib.h> //exit
#include <stdio.h>

double act_icma(int y1, int m1, int d1, 
                int y2, int m2, int d2,
                int y3, int m3, int d3,
                int freq);

#endif /* ACT_ICMA_H */
