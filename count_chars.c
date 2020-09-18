#include <stdio.h>
#include <stdlib.h> /*NULL ptr*/
int main()
{
    FILE *fptr;
    int c, white, other;
    int digit[10];
    fptr = fopen("C:\\Users\\aleks\\projects\\ansi_c\\text.txt", "r");
    white = other = 0;
    for (int i = 0; i < 10; i++)
    {
        digit[i] = 0;
    }
    while((c = fgetc(fptr)) != EOF)
    {
        if (c >= '0' && c <= '9') ++digit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t') ++white;
        else ++other;
    }
    printf("digits:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("there are %d of digit %d\n", digit[i], i);
    }
    printf(", white space = %d, other = %d\n", white, other);
    fclose(fptr);
}
