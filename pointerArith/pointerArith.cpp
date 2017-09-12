#include <iostream>

using namespace std;

void FloatArray(float *arr, int size )
{
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << endl;
	}

}


void SumArr(int * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum = sum + *(arr + 1);
	}
	cout << sum << endl;
}

int main()
{
	float * nums = new float[10];
	int * numnum = new int[10];

	for (int i = 0; i < 10; ++i) { *(nums + i) = 0.1; }


	FloatArray(nums, 10);

	for (int j = 0; j < 10; ++j) { *(numnum + j) = 1; }

	SumArr(numnum, 10);

	delete[] nums;
	delete[] numnum;

	system("pause");
}