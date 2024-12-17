#include "part1.h"
#include <iostream>

// the word length cannot be 12 because we have the /0 in the end which also counts as a letter
#define WORD_LENGTH 13

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}

void part1()
{
	char password[] = "secret";
	char src[] = "hello world!";
	char dest[WORD_LENGTH];

	string_copy(dest, WORD_LENGTH, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}