/*
   ==================================================
   Workshop #3 (Part-1):
   ==================================================
   Name   : Victor Tran
   ID     : Vtran18
   Email  : vtran18@myseneca.ca
   Section: IPC144NDD
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021

int main(void)
{
    int y; // year
    int m = 0; // month
    int d = 1; // day

    printf("General Well-being Log\n======================\n");
    for (m < 12 || m > 1)
    {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &y, &m);
        if (y > MAX_YEAR || y < MIN_YEAR)
        {
            printf("   ERROR: The year must be between 2010 and 2021 inclusive");
        }
        else if (m > 12 || m < 1)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)");
        }
        else
        {
            printf("*** Log Date Set! ***\n");
            switch (m)
            {
            case 1:
                printf("%d-JAN-%d", y, d);
                break;
            case 2:
                printf("%d-FEB-%d", y, d);
                break;
            case 3:
                printf("%d-MAR-%d", y, d);
                break;
            case 4:
                printf("%d-APR-%d", y, d);
                break;
            case 5:
                printf("%d-MAY-%d", y, d);
                break;
            case 6:
                printf("%d-JUN-%d", y, d);
                break;
            case 7:
                printf("%d-JUL-%d", y, d);
                break;
            case 8:
                printf("%d-AUG-%d", y, d);
                break;
            case 9:
                printf("%d-SEP-%d", y, d);
                break;
            case 10:
                printf("%d-OCT-%d", y, d);
                break;
            case 11:
                printf("%d-NOV-%d", y, d);
                break;
            case 12:
                printf("%d-DEC-%d", y, d);
                break;
            }
        }
    }
    return 0;

}