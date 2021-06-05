#include "sort.h"

void sort(int aray[], int m)
{
    int temp, flag = 1;
    while ((m > 1) && flag)
    {
        flag = 0;
        for (int i = 0; i < m - 1; i++)
        {
            if (aray[i] > aray[i + 1])
            {
                temp = aray[i];
                aray[i] = aray[i + 1];
                aray[i + 1] = temp;
                flag = 1;
            }
        }
        m--;
    }
}