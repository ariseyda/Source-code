#include <stdio.h> 

//Source code of a computer program is given below. What do you expect to be displayed on console? 
 
int a = 1; 
 
void fn(void); 
 
int main(void) {  
   
int a = 2;  
   
printf("%d\n", a); 
    
   {        
    int a = 3; 
	         
    printf("%d\n", a);     
	
	}
	
    a++;
	     
	printf("%d\n", a);
	     
	fn();
	     
	return 0; 
} 
 
void fn(void) {
     
printf("%d\n", a);
     
return; 
} 

 
