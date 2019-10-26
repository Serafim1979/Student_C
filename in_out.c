#include<stdio.h>

#include "data.h"
#include "in_out.h"

int input(student *pstud, int nstud)
{
    return nstud;
}

int output(student *pstud, int nstud)
{
    int i, j;
    for(i = 0; i < nstud; ++i)
    {
        fprintf(stdout, "%s", pstud[i].last_name);
        for(j = 0; j < MAXGRADES; ++j)
            fprintf(stdout, "%2d", pstud[i].grade[j]);
        fprintf(stdout, "\n");
    }
    return nstud;
}
