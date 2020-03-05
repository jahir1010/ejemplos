#include <stdio.h>

int main(void) {  
int *pPuntero;  
int var = 10;  
pPuntero = &var;    
printf("before ------ valor de var es: [%d]\n", var);    
printf("before --------valor de pPuntero es: [%d]\n", *pPuntero);        
var = 20;        
printf("after ------ valor de var es: [%d]\n", var);    
printf("after --------valor de pPuntero es: [%d]\n", *pPuntero);            
return 0; 
}