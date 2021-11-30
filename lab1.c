#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char keyword[3][5] = {"<<", ">>"};
    int i = 0, j = 0;
    char count[3] = {0};
    char buff[320];
    char FileName[32];
    printf("Enter the file name\n");
    scanf("%[^\n]s", FileName);
    fp = fopen(FileName, "r");
    if (fp == NULL)
    {
        printf("Could not open the file %s\n", FileName);
    }
    while (fscanf(fp, "%s", buff) != EOF)
    {
        for (i = 0; i < 2; i++)
        {
            if (strcmp(keyword[i], buff) == 0)
                count[i]++;
        }
    }
    for (i = 0; i < 2; i++)
    {
        if (count[i] > 0)
        {
            printf("%s=%d\n", keyword[i], count[i]);
        }
    }
    fclose(fp);
}