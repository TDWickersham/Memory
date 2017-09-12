#include <iostream>

using namespace std;

void releaseHalfLove()
{
	static int counter = 1;
	std::cout << "The game, Half-Love " << counter << ", was released!\n";
	counter++;

	if (counter == 3)
	{
		counter = 1;
	}
}

void fizzBuzz()
{
	static int counter = 1;
	if (counter % 3 == 0)
	{
		cout << "fizz";
		if (counter % 5 == 0)
		{
			cout << "buzz";
		}
	}
	else if (counter % 5 == 0)
	{
		cout << "buzz";
	}
	else
	{
		cout << counter;
	}

	cout << endl;

	counter++;
}

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		releaseHalfLove();
	}

	for (int j = 0; j < 20; ++j)
	{
		fizzBuzz();
	}

	system("pause");
}