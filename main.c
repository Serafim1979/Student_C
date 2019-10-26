#include<stdlib.h>
#include<stdio.h>
#include "menu.h"
#include "in_out.h"
#include "func.h"

int main()
{
    menu_item list[] =
    {
        {
            "Input", NULL
        },
        {
            "Output", output
        },
        {
            "Sorting", sort_by_name
        },
        {
            "Save", NULL
        },
        {
            "Load", NULL
        }
    };

    menu(list, sizeof list /sizeof *list);

    system("pause");
    return 0;
}
