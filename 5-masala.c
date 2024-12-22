#include <stdio.h>
#include <string.h>

int main()
{
    
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    FILE *output1 = fopen("output1.txt", "w");

    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    int number;
    
    while(!feof(input))
    {
        fscanf(input, "%d", &number);
        if (number % 2 == 1)
        {
            fprintf(output, "%d  ", number);
        }else
        {
            fprintf(output1, "%d  ", number);
        }
        
        
    
    }
}