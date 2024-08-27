#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

uint32_t max(uint32_t a, uint32_t b);

int main() {
    printf("What is happening?\n");
    uint32_t i, h;
    
    i = 0;
    h = 100;
    if (max(i, h) != h) {
        printf("Only in 2020\n");
    }
    
    i = 10;
    h = 0;
    if (max(i, h) != i) {
        printf("what even is life?\n");
    }
    
    return EXIT_SUCCESS;
}

uint32_t max(uint32_t a, uint32_t b) {
    uint32_t result = a;
    if (b > result) {
        result = b;
    }
    return result;
}

