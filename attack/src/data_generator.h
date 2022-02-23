//
// Created by Fourest on 2021/4/17.
//

#ifndef MY_LIBRARY_DATA_GENERATOR_H
#define MY_LIBRARY_DATA_GENERATOR_H

#include <random>
#include <ctime>

namespace Fourest
{
    typedef long long lint;
    class generator
    {
        std::mt19937_64 mt;
        lint upperLimit,lowerLimit;
        lint value=0;
    public:
        generator(lint l,lint u):mt(time(0))
        {
            upperLimit=u;
            lowerLimit=l;
        }
        generator(lint l,lint u,int seed):mt(seed)
        {
            upperLimit=u;
            lowerLimit=l;
        }
        lint random()
        {
            value=mt()%(upperLimit-lowerLimit+1)+lowerLimit;
            return value;
        }

    };
}

#endif //MY_LIBRARY_DATA_GENERATOR_H
