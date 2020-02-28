//Author: Thoithoi Shougrakpam
//Date: 2/28/20
#include <stdio.h> 
  
void printBinary(int n, int i) 
{ 
  
    int k; 
    for (k = i - 1; k >= 0; k--) { 
  
        if ((n >> k) & 1) 
            printf("1"); 
        else
            printf("0"); 
    } 
} 
  
typedef union { 
  
    float f; 
    struct
    { 
 
        unsigned int mantissa : 23; 
        unsigned int exponent : 8; 
        unsigned int sign : 1; 
  
    } ieee; 
} ieee754_float; 
  
void printIEEE(ieee754_float var) 
{ 
    printf("%d | ", var.ieee.sign); 
    printBinary(var.ieee.exponent, 8); 
    printf(" | "); 
    printBinary(var.ieee.mantissa, 23); 
    printf("\n"); 
} 

int main() 
{ 
    ieee754_float var; 
  
    var.f = 12.6; 
  
    printf("The result of %f is : \n", 
           var.f); 
    printIEEE(var); 
  
    return 0; 
} 
