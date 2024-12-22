#include<stdio.h>
#include<string.h>

int main(){
    
    FILE *input = fopen("input.txt", "r" );
    FILE* output = fopen("output.txt", "w");

    int number; 

    int s = 0;
    
    for (int i = 0; i < 4; i++)
    {
        fscanf(input, "%d", &number);
        fprintf(output, "%d + ", number);
        s += number;
    }
    fscanf(input, "%d", &number);
    s += number;
    fprintf(output, "%d = %d", number, s);
}