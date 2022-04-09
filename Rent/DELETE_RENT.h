#ifndef DELETE_RENT
#define DELETE_RENT
#define MAX 256

void deleterent() 
{
        int lno, ctr = 0;
        char ch, str[MAX];
        FILE *fptr1, *fptr2;
			
        fptr1 = fopen("Rented_Games.txt", "r");
        if (!fptr1) 
	{
                printf("File not found!\n");
        }

        fptr2 = fopen("Temp.txt", "w"); // open the temporary file in write mode 
        if (!fptr2) 
	{
                printf("Unable to open a temporary file to write!!\n");
                fclose(fptr1);
        }

        printf("\nEnter the line you want to remove: ");
        scanf("%d", &lno);
	lno++;

        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1)) 
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1)) 
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno) 
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);

        remove("Rented_Games.txt");  		// remove the original file 
        rename("Temp.txt", "Rented_Games.txt"); 	// rename the temporary file to original name

/*------ Read the file ----------------*/
        fptr1=fopen("Rented_Games.txt","r"); 
        ch=fgetc(fptr1); 
        printf("The updated rent records of the file %s is as follows: \n\n","Rented_Games.txt"); 
        while(ch!=EOF) 
            { 
                printf("%c",ch); 
                 ch=fgetc(fptr1); 
            }
        fclose(fptr1);
/*------- End of reading ---------------*/
} 
#endif







