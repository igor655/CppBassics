#include<iostream>
//#include<conio.h>


using namespace std;
template<class T>
void print(T*, int n);

template<class T> 
void selectSort(T*, int n);



int main()
{

	cout << "Select sort\n";

	int arr[]{ 12, 19, 4, 8, 9, 2,5, -3, -4, 11, -22 };
	int N = sizeof(arr) / sizeof(int);
	cout << "arr before sort\n";
	print(arr, N);
	selectSort(arr, N);
	cout << "arrr after select sort\n";
	print(arr, N);

	
	cin.get();
	return 0;
}

template<class T>
void print(T* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n---------------------------------\n";
}


template<class T>
void selectSort(T* arr, int n)
{
	for (size_t i = 0; i < n-1; i++)
	{ 
		int index = i; // index of min element
		for (size_t j = i+1; j < n; j++)
		{
			if (arr[j] < arr[index])
			{
				index = j;
			}

		}
		//swap
		//swap(arr[i], arr[index]);

		T tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;

	}
}
