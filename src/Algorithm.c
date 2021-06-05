#include "Algorithm.h"
#include "sort.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

void FCFS(int array_Track[], int m)
{
    float sum = 0, avg;
    int cur;
    printf("输入当前磁道号：\n");
    scanf("%d", &cur);
    sum = abs(cur - array_Track[0]);
    printf("FCFS算法调度后序列号：\n%d ", array_Track[0]);

    for (int i = 0, j = 1; j < m; i++, j++)
    {
        sum += abs(array_Track[j] - array_Track[i]);
        printf("%d ", array_Track[j]);
    }
    avg = sum / m;
    printf("\n平均寻道长度：%.3f\n", avg);
}

void SSTF(int array_Track[], int m)
{
    int i, j;
    float sum = 0, avg = 0;
    int cur, minj, min, Dcount = 0;
    int Disk[MaxTrack], Track[MaxTrack];
    memset(Disk, 0, MaxTrack);
    memset(Track, 0, MaxTrack);
    printf("请输入当前磁道号：\n");
    scanf("%d", &cur);
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < m; i++)
        {
            if (Track[i] == -1)
            {
                continue;
            }
            else
            {
                if (cur < array_Track[i])
                {
                    Track[i] = array_Track[i] - cur;
                }
                else
                {
                    Track[i] = cur - array_Track[i];
                }
            }
        }
        min = 200;
        minj = 0;
        for (i = 0; i < m; i++)
        {
            if (Track[i] == -1)
                continue;
            else
            {
                if (Track[i] < min)
                {
                    min = Track[i];
                    minj = i;
                }
            }
        }
        cur = array_Track[minj];
        Disk[Dcount++] = cur;
        sum += Track[minj];
        Track[minj] = -1;
        printf("%d\n", sum);
    }
    avg = sum / m;
    printf("寻道序列：\n");
    for (i = 0; i < m; i++)
        printf("%d ", Disk[i]);
    printf("\n平均寻道长度：\n", avg);
}

void SCAN(int array_Track[], int m)
{
    int i, j, k, r = 0, l = 0, cur, count;
    int temp[MaxTrack];
    float sum = 0, avg = 0;
    printf("请输入当前磁道号：\n");
    scanf("%d", &cur);
    for (i = 0; i < m;i++)
    {
        temp[i] = array_Track[i];
    }
    sort(temp, m);
    while(temp[k]<cur)
    {
        k++;
    }
    l = k - 1;
    r = k;
    printf("请输入移动臂移动方向：\n1：大于当前磁道号\n2：小于当前磁道号\n");
    scanf("%d", &count);
    
}

void CSCAN(int array_Track[], int m)
{
}
void FSCAN(int array_Track[], int m)
{
}
