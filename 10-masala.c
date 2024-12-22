#include <stdio.h>
#include <string.h>

int main(){                            
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");


    if (input == NULL){         
        printf("Faylni o'qib bo'lmadi!");
        return 1;
    }


    int number[100], count = 0;    

    while (!feof(input)){
        fscanf(input, "%d", &number[count]);
        count++;
    }
    fprintf(output, "%d  %d", number[0], number[count - 1]);   
}