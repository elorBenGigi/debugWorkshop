#include <iostream>

/*
* the code works based on the fibonacci sequence
*/

int main()
{
	int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	// size was usnigned so if we did 0 - 1, we would get the max number of an unsigned int
	// the fix is to set it as a int therefor it wont 'reset' the number back to its limit
	while (size >= 0)
	{
		if (size == 0)
		{
			std::cout << t1;
		}
		else
		{
			std::cout << t1 << ", ";
		}

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}