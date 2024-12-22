#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("input.txt", "r");   
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL){       
        perror("input file yuq");
        return 1;            
    }

    char letter[50];   
    int count = 0;     

    while (!feof(input)){             
        fscanf(input, "%s", letter);     

        if (letter[0] >= 'a' && letter[0] <= 'z'){    
            letter[0] = letter[0] - 32;           
            fprintf(output, "%s ", letter);      

        }else{
            fprintf(output, "%s ", letter);
        }
        
        
    }
}