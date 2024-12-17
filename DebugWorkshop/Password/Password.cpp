#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	/*
	the string in the structure is 16 bytes long, but really, only 15 of those are for actual characters. The last byte is saved for a \0,
	then there is one more byte in the structure for a boolean value, making the whole thing 17 bytes total.

	now if you try to write 16 characters into the string, you are using up all 16 bytes so there is no room left for the \0 at the end,
	what happens is that the \0 ends up in the next spot, where the boolean value is stored and that lead to the program to overwrites the boolean,
	and since anything other than 1 is true, the boolean is always false
	*/
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if (!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}