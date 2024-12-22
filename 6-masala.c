#include <stdio.h>
#include <string.h>

int main()
{

    FILE *input = fopen("input.txt", "r");
    FILE *input1 = fopen("input1.txt", "r");
    FILE *output1 = fopen("output1.txt", "w");

    
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    char string1[50], string2[50];

    while (!feof(input))
    {
        fscanf(input, "%s", string1);
        fscanf(input1, "%s", string2);
        fprintf(output1, "%s - %s\n", string1, string2);
    }
}