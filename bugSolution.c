/*
 * This code is the same as the buggy version but includes comments explaining why the value of x changes.
 * The assignment *ptr = 20; modifies the value of x because ptr points to the memory location of x.  
 * Therefore, dereferencing ptr and assigning 20 changes the value at that memory location, which is x.
 */
#include <stdio.h>

int main() {
    int x = 10; 
    int *ptr = &x; 
    *ptr = 20; // This line modifies x through the pointer ptr
    printf("The value of x is: %d\n", x);  // Output: 20 
    return 0; 
} 