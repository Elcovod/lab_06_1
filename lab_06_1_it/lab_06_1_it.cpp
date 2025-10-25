#include <iostream>
#include <iomanip>

using namespace std;

void create(int* arr, int SIZE)
{
	int MIN = 10;
	int MAX = 90;
	for (int i = 0; i < SIZE; i++) {
		arr[i] = MIN + rand() % (MAX - MIN + 1);
	}
}

void print(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++) {
		cout << setw(4) << arr[i] << " ";
	}
}

int sum(int* arr, int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		if (!(arr[i] % 2 != 0 && arr[i] % 3 == 0))
			sum += arr[i];
	}
	return sum;
}

int count(int* arr, int SIZE)
{
	int count = 0;
	for (int i = 0; i < SIZE; i++) {
		if (!(arr[i] % 2 != 0 && arr[i] % 3 == 0))
			count++;
	}
	return count;
}

void replaceElements(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++) {
		if(!(arr[i] % 2 != 0 && arr[i] % 3 == 0)) {
			arr[i] = 0;
		}
	}
	
}

int main() {
	srand((unsigned)time(NULL));

	const int SIZE = 21;
	int arr[SIZE];
	create(arr, SIZE);
	cout << "Original array: " << endl;
	print(arr, SIZE);
	cout << endl;
	cout << "Sum = " << sum(arr, SIZE) << endl;
	cout << "Count = " << count(arr, SIZE) << endl;
	replaceElements(arr, SIZE);
	cout << "Modified array: " << endl;
	print(arr, SIZE);
	return 0;
}