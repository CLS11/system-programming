#include<stdio.h>
int main()
{
	char a_char = 'z';

	char* a_char_ptr = &a_char;


   	printf("a_char_ptr: %p\n", a_char_ptr);
	printf("*a_char_ptr: %c\n", *a_char_ptr);
	*a_char_ptr = 'y';
	printf("*a_char_ptr: %c\n", *a_char_ptr);
}

