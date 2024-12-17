#include "part2.h"
#include <iostream>
#include <stdexcept>

char* safe_string_copy(char* dest, unsigned int destsize, char* src)
{
	unsigned int srcsize = (unsigned int)strlen(src);
	if (srcsize >= destsize)
		throw std::overflow_error("possible buffer overflow");

	char* ret = dest;
	for (unsigned int i = 0; i < srcsize * sizeof(*src); i++)
		*dest++ = *src++;

	ret[destsize - 1] = 0; // protects the string from exiting its bounds

	return ret;
}


#define BUF_SIZE 20

void part2()
{
	char password[] = "secret";
	char dest[BUF_SIZE] = ""; // reseting the string to clean the buffer
	char src[] = "hello world!";

	safe_string_copy(dest, BUF_SIZE, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}