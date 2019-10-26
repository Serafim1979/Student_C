#include<stdlib.h>
#include<stdio.h>
#include "menu.h"

void menu(const menu_item list[], int n)
{
    int i, ch;

    while(1)
    {
        system("cls");

        for(i = 0; i < n; ++i)
        {
            printf("%d. %s\n", i+1, list[i].text);
        }
        printf("%d. %s\n", 0, "Exit");

        do
        {
            printf("\nMake your choice: ");
            fflush(stdin);
        }while(scanf("%d", &ch) != 1 || ch < 0 || ch > i);

        if(--ch < 0)
            break;

        n = list[ch].command(pstud, nstud);

        system("pause");
    }
}
