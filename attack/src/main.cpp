#include <iostream>
#include <cstdio>
#include "data_generator.h"
using namespace std;

const int MAX_CYCLE=100000;
const int MAX_ADD_TIME=5;

int main()
{
    Fourest::generator gen(1,100);
    double dest[110];
    int q=8;
    for(int p=0;p<100;++p)//from 1% to 100%
    {
        int sum=0;
        for(int cycle=1;cycle<MAX_CYCLE;++cycle)//for every base rate test cycle times
        {
            int times=0,rate=p,add_time=0;
            while(1)
            {
                ++times;
                if(gen.random()<=rate) break;
                if(add_time<MAX_ADD_TIME)
                {
                    rate+=q;
                    add_time++;
                }
            }
            sum+=times;
        }
        dest[p]=(double)100*MAX_CYCLE/sum;
    }
    for(int i=0;i<100;++i) printf("%02d %05lf\n",i,dest[i]);
    return 0;
}