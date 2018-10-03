#include "act_icma.h"

/* y1, m1, d1 -- last payment date
 * y2, m2, d2 -- current payment date
 * y3, m3, d3 -- next payment date
 * freq -- number of payments per year
 */
double act_icma(int y1, int m1, int d1, 
                int y2, int m2, int d2,
                int y3, int m3, int d3,
                int freq)
{
    if( freq < 1 ){
        fprintf(stderr, "Payment frequency is smaller than 1."); 
        exit(-1);
    }

    int prev = date_to_jd(y1, m1, d1);
    int curr = date_to_jd(y2, m2, d2);
    int succ = date_to_jd(y3, m3, d3);
    
    if(prev > curr){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1);
    }

    if(curr > succ){
        fprintf(stderr, "Newer date y3-m3-d3 is older than previous date y2-m2-d2."); 
        exit(-1);
    }
    
    int zaehler = (curr - prev);
    int nenner  = (freq * (succ - prev));
    
    if((zaehler <= 366) && (nenner > 364) && (nenner <= 365)){
        return (double)(zaehler) / (double)(nenner);
    }else{
        return act_isda(y1,m1,d1, y2,m2,d2);
    }
}
