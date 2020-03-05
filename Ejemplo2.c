#include <stdio.h> 
#include <stdint.h> 
#define TAM   10 

int main(void) {  
int array[10];    
for(int i = 0; 
i < TAM; i++){      
array[i] = i;  
}   
for(int i = 0; 
i < TAM; i++){       
printf(" [%d] ", array[i]);          
}     
printf("\n");    
array[5] = 500;    
int *pPointer = array;     
for(int i = 0; i < TAM; i++){        
printf(" [%d] ", *(pPointer+i));            }
printf("\n");    
array[8] = 800;    pPointer = &array[0];        
for(int i = 0; i < TAM; i++){        
printf(" [%d] ", *(pPointer+i));            
}    
printf("\n");    
return 0; 
}
