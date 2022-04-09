#ifndef VIEW_RENT
#define VIEW_RENT

void viewrent()
{
    FILE * ptr;
    int c;
    ptr = fopen("Rented_Games.txt","r");

    if (ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("#####     RENTED GAMES     #####\n\n");
        printf("Date rented| Date due  |  Game name  \n");
        printf("-----------|-----------|---------------\n");
    }

    while((c = fgetc(ptr)) != EOF)
    {
        printf("%c",c);
    }
    printf("\n\n");
}
#endif