#include<stdio.h>
int main()
{
	char digits[4] = { '1', '2', '3', '\0' };
	char letters[4] = "abc";

	printf("digits: %p\n", digits);
	printf("letters: %p\n", letters);

	printf("sizeof(digits): %lu\n", sizeof(digits));
	printf("sizeof(letters): %lu\n", sizeof(letters));
	return 0;
}
