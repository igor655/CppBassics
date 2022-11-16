#include<iostream>
//#include<conio.h>


using namespace std;
template<class T>
void print(T*, int n);


void mergeSort(int arr[], int left, int right);


void merge(int arr[], int begin, int end);




int main()
{

	cout << "Merge sort\n";

	int arr[]{ 12, 16, 2, 9, 8, -1, 0, -5, 22 };
	int size = sizeof(arr) / sizeof(arr[0]);
	//const int size = 9;
	cout << " array before merge sort\n";
	print(arr, size);
	mergeSort(arr, 0, size-1);

	cout << " array after merge sort\n";
	print(arr, size);

	//dinamic array

	/*int N = 10;
	int* arr2 = new int[N] { 10, 3, 16, 2, 5, 4, 8, 9, -1, -7 };
	print(arr2, N);*/

	

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
	cout << "\n ptr size = " << sizeof(int*) << endl; // size ptr to int 
	cout << "\n---------------------------------\n";
}



void mergeSort(int arr[], int left, int right)
{
	int tmp = 0;
	if (left < right)
	
		if (right - left == 1)
		{
			if (arr[left] > arr[right])
			{
				tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
			}
		}
		else
		{
			mergeSort(arr, left, left+ (right - left) / 2);
			mergeSort(arr, left+(right - left) / 2 + 1 , right );
			merge(arr, left, right);
		}
	

}


void merge(int arr[], int begin, int end)
{
	int i = begin;
	int mid = begin + (end - begin) / 2;
	int j = mid + 1;
 	int k = 0; // index of temp array
	//int tmpArr[sizeof(arr)/ sizeof(arr[0]) + 2]; // size of temp array array
	//int tmpArr[20]; // size of temp array array
	//int tmpArr[20]; // size of temp array array
	int* tmpArr = new int[end + 2]; // dynamic array

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
		{
			tmpArr[k] = arr[i];
			i++;

		}
		else
		{
			tmpArr[k] = arr[j];
			j++;
		}
		k++;
	}

	//
	while (i <= mid)
	{
		tmpArr[k] = arr[i];
		i++; k++;
	}

	while (j <= end)
	{
		tmpArr[k] = arr[j];
		j++; k++;
	}
	for (int i = 0; i < k; i++)
	{
		arr[begin + i] = tmpArr[i];
	}
}
