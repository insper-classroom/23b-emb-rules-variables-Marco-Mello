#include "stdio.h"

// ..

int foo(int a) {
    a = a + 1; // acessa variavel global
    return a;
}

void main(void) {
    int b = 0;
    
    while (1) {
        foo();
        
        if (a > 5) {
            b = 1;
        }
    }
    
}
