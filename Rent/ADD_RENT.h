#ifndef ADD_RENT
#define ADD_RENT

void addrent()
{
    char game_name[20];
    char date_due[20];

    FILE * ptr;
    ptr = fopen("Rented_Games.txt","a");

    if (ptr == NULL)
    {
        printf("File not found\n");
    }

    printf("\n===Add a new record===\n");
    printf("Name of rented game:\t");      
    scanf("%s", game_name);
    printf("Date due:\t");
    scanf("%s", date_due);
    printf("\nSYSTEM: New customer successfully added.\n\n");

    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(ptr,"%-2d/%d/%d  | %s|  %s  \n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900, date_due, game_name);
    fclose(ptr);
}
#endif