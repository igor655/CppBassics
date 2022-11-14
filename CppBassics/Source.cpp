#include<iostream>
//#include<conio.h>


using namespace std;
template<class T>
void print(T*, int n);




int main()
{

	cout << "Select sort\n";

	

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



