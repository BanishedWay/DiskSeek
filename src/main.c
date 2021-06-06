#include <stdio.h>
#include <stdlib.h>
#include "Algorithm.h"

int main()
{

    int array_Track[MaxTrack];
    int num_Track;
    printf("请输入磁盘调度序列数目：\n");
    scanf("%d", &num_Track);
    initRandomArray(array_Track, num_Track);
    for (int i = 0; i < num_Track; i++)
        printf("%d ", array_Track[i]);
    printf("\n");
    int flag = 0;
    do
    {
        printf("请选择算法：\n");
        printf("0：退出系统\n");
        printf("1：FCFS先来先服务算法\n");
        printf("2：SSTF最短寻道时间优先算法\n");
        printf("3：SCAN电梯调度算法\n");
        printf("4：CSCAN循环式单向电梯调度算法\n");
        printf("5：FSCAN双向电梯调度算法\n");
        printf("请输入你的选择：\n");
        scanf("%d", &flag);
        switch (flag)
        {
        case 0:
            exit(0);
            break;
        case 1:
            FCFS(array_Track, num_Track);
            break;
        case 2:
            SSTF(array_Track, num_Track);
            break;
        case 3:
            SCAN(array_Track, num_Track);
            break;
        case 4:
            CSCAN(array_Track, num_Track);
            break;
        case 5:
            FSCAN(array_Track, num_Track);
            break;
        default:
            printf("输入错误，请重新输入!\n");
            break;
        }
    } while (flag);

    return 0;
}