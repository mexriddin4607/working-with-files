#include<stdio.h>
#include<string.h>

int main(){
    
    char  word[50], minword[50], maxword[50];

    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL)
    {
        perror("input file yuq");
    }
    
    fscanf(input, "%s", word);
    strcpy(minword, word);
    strcpy(maxword, word);

    while (!feof(input)){
        fscanf(input, "%s", word);
        
        if (strlen(minword) > strlen(word))
        {
            strcpy(minword, word);
        }
        if (strlen(maxword) < strlen(word))
        {
            strcpy(maxword, word);
        }
    }
    fprintf(output, "Eng kalta so`z: %s\nEng uzun so`z: %s", minword, maxword);
}