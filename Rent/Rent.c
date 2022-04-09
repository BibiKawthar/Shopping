#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#include "ADD_RENT.h"
#include "VIEW_RENT.h"
#include "DELETE_RENT.h"

void arrow(int real, int arrowpos)
{
    if (real == arrowpos)
    {
        printf("\033[1;33m");
        printf("----->");
        printf("\033[1;0m");
    }
}

void RENT()
{
    int position = 1;
    int keypressed = 0;

    while(keypressed !=13)
    {
        printf("\033[1;34m");
        printf("\n\t\t||THE GAME SHOP||\n\n");
        printf("\033[1;0m");
        arrow(1,position);printf("\t\tAdd a new rent\n\n");
        arrow(2,position);printf("\t\tView rent register\n\n");
        arrow(3,position);printf("\t\tDelete a rent record\n\n");
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
       addrent();
    }
    else if(position==2)
    {
        viewrent();
    }
    else if(position==3)
    {
        deleterent();
    }
    while(position!=4)
    {
      RENT();
    }
    if(position==4)
    {
        printf("Program Terminated\n");
        exit(0);
    }
}

int main()
{
    RENT();
    
    return 0;
}
