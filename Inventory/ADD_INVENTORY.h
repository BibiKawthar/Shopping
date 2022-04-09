#ifndef ADD_INVENTORY
#define ADD_INVENTORY

void addinventory()
{
    char game_name[20];
    int quantity;

    FILE * ptr;
    ptr = fopen("Inventory.txt","a");

    if (ptr == NULL)
    {
        printf("File not found\n");
    }

    printf("\n===Add a new batch of inventory===\n");
    printf("Name of game:\t");      
    scanf("%s", game_name);
    printf("Quantity of game:\t");      
    scanf("%d", &quantity);
    printf("\nSYSTEM: New batch successfully added.\n\n");

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(ptr,"%-2d/%d/%d  | %d        |  %s  \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900, quantity, game_name);
    fclose(ptr);
}
#endif