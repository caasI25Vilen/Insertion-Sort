#include<iostream>

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void InsertionSort(T A[], const int Size)
{
	T key;
	int j;
	for (int i = 1; i < Size; ++i)
	{
		key = A[i];
		j = i - 1;

		while (j >= 0 && key < A[j])
		{
			Swap(A[j], A[j + 1]);
			--j;
		}
	}
}

int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };

	std::cout << "Before: ";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		std::cout << arr[i] << " ";
	std::cout << "\n\n";

	InsertionSort<int>(arr, sizeof(arr) / sizeof(arr[0]));

	std::cout << "After: ";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		std::cout << arr[i] << " ";
	std::cout << "\n\n";

	system("pause");
}