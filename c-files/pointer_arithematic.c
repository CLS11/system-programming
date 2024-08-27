#include<stdio.h>
int main()
{
	char a[] = { 'c', 'o', 'm', 'p' };
	printf("&a[0]: %p\n", &a[0]);
	printf("&a[1]: %p\n", &a[1]);
	printf("&a[2]: %p\n", &a[2]);
	printf("&a[3]: %p\n", &a[3]);

	char *p = &a[1] + 1;
	printf("*p: %c\n", *p);
	p-=1;
	printf("*p: %c\n", *p);
}

