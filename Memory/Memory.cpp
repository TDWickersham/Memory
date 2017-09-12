#include <iostream>

using namespace std;

int sumTwoIntPtrs(int *a, int * b)
{
	return *a + *b;
}


void FillPtrArray(int *arr)
{

	for (int i = 0; i < 10; i++)
	{
		*(arr + i) = i;
		arr[i] = i;
	}

}

int main()
{
	int * numAptr = new int(10);
	int * numBptr = new int(22);

	int * ptrArray = new int[10];

	cout << numAptr << endl;

	cout << sumTwoIntPtrs(numAptr, numBptr);


	*numAptr; // Gets the value from the memory address
	numAptr; // Gets the memory address



	while (true) {}

	//ALWAYS DELETE YOUR POINTERS
	delete numAptr;
	delete numBptr;
	delete[] ptrArray;
}