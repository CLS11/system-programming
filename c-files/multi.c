#include<stdio.h>
#define COUNT 3
int main()
{
	char a[] = "a";
	char b[] = "big";
	char c[] = "cake";

	char *words[COUNT] = { a, b, c };

	char **word_ptr = words;
	for(int i = 0; i < COUNT; ++i){
	printf("%c: %s\n", **word_ptr, *word_ptr);
	word_ptr++;
	}
}
