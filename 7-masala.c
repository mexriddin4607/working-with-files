#include <stdio.h>

int main(){
    FILE *input1 = fopen("input.txt","r");   
    FILE *input2 = fopen("input1.txt","r");
    FILE *output = fopen("output.txt","a");   

    if (input1 == NULL  && input2  == NULL){         
        printf("Fayllarni o'qib bo'lmaydi !");
        return 1;                    
    }
     char line1[100];           
     char line2[100];           

        while (!feof(input1)  && !feof(input2)){    

            fscanf(input1,"%s",line1) && fscanf(input2,"%s",line2);
            fprintf(output," %s\n%s\n",line1, line2);
            
        }
        
        return 0;

}