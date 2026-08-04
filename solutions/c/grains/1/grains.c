#include "grains.h"
uint64_t square(uint8_t index)
{
    uint64_t result = 1;
    if(index==0)
    {
        result= 0;
    }
    else if(index==1)
    {
        result= 1;
    }
    else 
    {
        for (int i = 1; i < index; i++) 
        {
            result *= 2;
        }
    }
    return result;
}
uint64_t total(void)
{
    uint64_t sum=0;
    for (int i = 1; i <=64; i++) 
    {
        sum= sum+ square(i);
    }
    return sum; 
}