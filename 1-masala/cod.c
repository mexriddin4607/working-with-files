#include <stdio.h>

int main(){       
    FILE *file;             
    char filename[] = "input.txt";      
    int count,num;                 
    float sum = 0.0 , middle;          

    file = fopen(filename,"r");         
     if (file == NULL){                                  
        printf("Faylni ochib bo'lmaydi :");
        return 1;
     }
        while (fscanf(file,"%d",&num) == 1){      
            sum += num;    
            count ++;      
            
        }
        fclose(file);     


     if (count == 0){           
        printf("BU faylda sonlar mavjud emas ");
     }

    middle = sum/count;        

    printf("Ushubu fayldagi sonlarni o'rta arifmetigi :%1.f",sum);     
 
}