#include <stdio.h> 
#include <stdint.h>
#define TAM   10 

int main(void) {  
int array[10];    
for(int i = 0; i < TAM; i++){      
array[i] = i;  
}   
for(int i = 0; i < TAM; i++){       
printf(" [%d] ", array[i]);          
} 
printf("\n");        
int *pPointer = &array[3];     
*pPointer = 300;            
for(int i = 0; i < TAM; i++){        
printf(" [%d] ", array[i]);            
}    
printf("\n");          
//pPointer = array;        
for(int i = 0; i < TAM; i++){        
printf(" [%d] ", *(pPointer+i));            
}    
printf("\n");    
return 0; 
}