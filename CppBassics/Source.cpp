#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;



int main()
{

	cout << "Ravesli stl lessons\n";
	cout << "vector\n";

	// init vector
	vector<int> my_vector;
	for (size_t i = 0; i < 8; i++) 
	{
		my_vector.push_back(i + 3);
	}

	for (size_t i = 0; i < my_vector.size(); i++)
	{
		cout << "my_vector: " << i << " = " << my_vector[i] << " ";

	}
	cout << "\n====================================\n";




	cin.get();
	return 0;
}
