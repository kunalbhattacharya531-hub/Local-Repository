// This code reads a file and converts the text into uppercase characters

#include<stdio.h>
#include<stdlib.h>

#define FILENAME "Test.txt"

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char ch = ' ';

    fp1 = fopen(FILENAME , "r");
    if(fp1 == NULL)
        return (-1);
    
    //create a temp file
    fp2 = fopen("temp.txt", "w");
    if(fp2 == NULL)
        return(-1);
    
    while((ch = fgetc(fp1)) != EOF)
    {
        if(islower(ch)){
            ch = ch - 32;
        }
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    remove(FILENAME);
    //rename temp file to "Test.txt"
    rename("temp.txt", FILENAME);
    //remove text file
    remove("temp.txt");

    fp1 = fopen(FILENAME, "r");
    if(fp1 == NULL)
        return (-1);
    
    while((ch = fgetc(fp1)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp1);
    fp1 = NULL;
    fp2 = NULL;

    return 0;
}