#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum=0;
    unsigned int i;
    for (i=0; i<=number; i++)
    {
        sum=sum+i;
    }
    return sum*sum;
}

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int s=0;
    unsigned int j;
    for (j=0; j<=number; j++)
    {
        s= s+(j*j);
    }
    return s;
}

unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number)-sum_of_squares(number);
}