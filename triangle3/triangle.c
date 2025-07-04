/* Tristan Weary
 * Comp 215
 * Module 6
 * 07/01/2025
 *
 * This program creates a hollow triangle in C
 *
 */


#include <stdio.h>

int main() {
    
//declaring variables for input and loops
	        int n, i, j, k;

	        
	//gather user input from console
	printf("Enter a number of rows for the triangle (between 1 and 20): ");
	scanf("%d", &n);
	
	//validate user input with a while-loop
	while (n < 1 || n > 20) {
	printf("Please try again. Enter a number of rows for the triangle (between 1 and 20): ");
	scanf("%d", &n);

}
printf("\n \n");
	        
	        
	        

//loop to draw triangle


//outputs n number of newlines
for (i = 1; i <= n; i++) {

	//decreasing spaces to make the asterisks angle
     for (j = i; j < n; j++) {
	                printf(" ");
     }
	            
     //loop for the asterisk conditions
	            for (k = 1; k <= (2 * i - 1); k++) {
	                
	 /*sets conditions for asterisks:
	  * 	k == 1 draws left side
	  * 	i = n draws the base
	  * 	k = (2 * i - 1) draws the right side
	  *
	  */

	              if (k == 1 || i == n || k == (2 * i - 1)) {
	                 printf("*"); 
	               } else { //draws spaces inside triangle
	                    printf(" "); }
	             }
	                
	                
	                
    
	            
 //each row has a newline
    
    printf("\n");



   
}  return 0;
}
