#include "mcm.h"

int Mcm(int num1, int num2)
{
    int mcm = num1 * num2;

    for (int i = mcm; i >= 1; i--)
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            mcm = i;
        }
    }

    return mcm;
}