#include "Algorithm.h"
#include <stdio.h>
#include <math.h>

void FCFS(int array_Track[], int m)
{
    float sum = 0, avg;
    int cur;
    printf("输入当前磁道号：\n");
    scanf("%d", &cur);
    sum = abs(cur - array_Track[0]);
    printf("FCFS算法调度后序列号：%d\n磁盘调度序列：\n", array_Track[0]);

    for (int i = 0, j = 1; j < m; i++, j++)
    {
        sum += abs(array_Track[j] - array_Track[i]);
        printf("%d ", array_Track[j]);
    }
    avg = sum / m;
    printf("平均寻道长度：%f\n", avg);
}

void SSTF(int array_Track[], int m)
{
}

void SCAN(int array_Track[], int m)
{
}

void CSCAN(int array_Track[], int m)
{
}
void FSCAN(int array_Track[], int m)
{
}