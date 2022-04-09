#ifndef VIEW_INVENTORY
#define VIEW_INVENTORY

void viewinventory()
{
    FILE * ptr;
    int c;
    ptr = fopen("Inventory.txt","r");

    if (ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("#####    GAMES INVENTORY     #####\n\n");
        printf("Date       | Quantity  | Game Name  \n");
        printf("-----------|-----------|-----------\n");
    }

    while((c = fgetc(ptr)) != EOF)
    {
        printf("%c",c);
    }
    printf("\n\n");
}
#endif