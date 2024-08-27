#include<stdio.h>
#include<stdint.h>
uint64_t sum(uint64_t x)
{
	printf("x: %lu - &x: %p\n", x, &x);
	if (x <=1){
		return x;
	}else {
		return sum(x-1) + x;
	}
}
int main()
{
	printf("sum(3): %lu\n", sum(3));
}

