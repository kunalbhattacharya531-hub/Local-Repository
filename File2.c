//This code prints out a file in reverse order

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "Text1.txt"

int main()
{
    FILE *fp = NULL;

    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if(fp == NULL)
        return (-1);

    //moves file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    //get the position of the file pointer
    count = ftell(fp);

    while(i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}
