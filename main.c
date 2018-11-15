#include <stdio.h>
#include <stdlib.h>

void writetofile(void);
void readfile(void);

int main()
{
    readfile();
    //writetofile();
    return 0;
}

void writetofile()
{
    FILE *ptrfile;
    // Attempt to open the file with write capacity.
    ptrfile = fopen("C:\\mason\\something.txt", "w");
    if (ptrfile == NULL)
    {
        printf("Unable to open/write file.");

    }
    else
    {
        printf("Enter an integer: ");
        int num;
        scanf("%d", &num);
        fprintf(ptrfile, "%d", num);
        fclose(ptrfile);
    }
}

readfile()
{
    int num; // Store contents of file.
    FILE *ptrfile;
    ptrfile = fopen("C:\\mason\\something.txt", "r");
    if (ptrfile == NULL)
    {
        printf("Unable to open/read file.");
    }
    else
    {
        fscanf(ptrfile, "%d", &num);
        printf("Contents of the file: %d", num);
        fclose(ptrfile);
    }
}
