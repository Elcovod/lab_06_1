#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX, int i)
{
	if (i >= SIZE)
	{
		return;
	}
		arr[i] = MIN + rand() % (MAX - MIN + 1);
		create(arr, SIZE, MIN, MAX, i + 1);
}

void print(int* arr, int SIZE, int i)
{
	if (i >= SIZE)
	{
		return;
	}
		cout << setw(3) << arr[i];
		print(arr, SIZE, i + 1);
}

int Sum(int* arr, int SIZE, int sum, int i)
{
	if (i >= SIZE) {
		return sum;
	}

		if (!(arr[i] % 2 != 0 && arr[i] % 3 == 0))
			sum += arr[i];
		return Sum(arr, SIZE, sum, i + 1);
}

int Count(int* arr, int SIZE, int count, int i)
{
	if (i >= SIZE) {
		return count;
	}

		if (!(arr[i] % 2 != 0 && arr[i] % 3 == 0))
			count ++;
		return Count(arr, SIZE, count, i + 1);
}

void replaceElements(int* arr, int SIZE, int i)
{
	if (i >= SIZE)
	{
		return;
	}
	if (!(arr[i] % 2 != 0 && arr[i] % 3 == 0))
	{
		arr[i] = 0;
	}
	replaceElements(arr, SIZE, i + 1);
}

int main()
{
	srand((unsigned)time(NULL));

	const int SIZE = 21;
	int arr[SIZE];
	create(arr, SIZE, 10, 90, 0);
	cout << endl;
	print(arr, SIZE, 0);
	cout << endl;
	cout << "Sum = " << Sum(arr, SIZE, 0, 0) << endl;
	cout << "Count = " << Count(arr, SIZE, 0, 0) << endl;
	replaceElements(arr, SIZE, 0);
	print(arr, SIZE, 0);
	return 0;
}
