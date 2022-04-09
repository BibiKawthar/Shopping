#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#include "ADD_INVENTORY.h"
#include "VIEW_INVENTORY.h"
#include "DELETE_INVENTORY.h"

void arrow(int real, int arrowpos)
{
    if (real == arrowpos)
    {
        printf("\033[1;33m");
        printf("----->");
        printf("\033[1;0m");
    }
}

void INVENTORY()
{
    int position = 1;
    int keypressed = 0;

    while(keypressed !=13)
    {
        printf("\033[1;34m");
        printf("\n\t\t||THE GAME SHOP||\n\n");
        printf("\033[1;0m");
        arrow(1,position);printf("\t\tAdd a new inventory batch\n\n");
        arrow(2,position);printf("\t\tView inventory register\n\n");
        arrow(3,position);printf("\t\tDelete an inventory record\n\n");
        arrow(4,position);printf("\t\tExit\n");

        keypressed = getch();
        system("cls");
        if(keypressed == 80 && position !=3)
        {
            position = position + 1;
        }
        else if(keypressed ==72 && position !=1)
        {
            position--;
        }

        else
        {
            position = position;
        }
    }
    printf("\033[1;34m");
    printf("\t\t||THE GAME SHOP||\n\n");
    printf("\033[1;0m");
    if(position==1)
    {
       addinventory();
    }
    else if(position==2)
    {
        viewinventory();
    }
    else if(position==3)
    {
        deleteinventory();
    }
    while(position!=4)
    {
      INVENTORY();
    }
    if(position==4)
    {
        printf("Program Terminated\n");
        exit(0);
    }
}

int main()
{
    INVENTORY();
    
    return 0;
}
