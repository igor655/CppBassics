#include<iostream>
#include<conio.h>
#include<vector>
#include<deque>


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
	

	cout << "\n deque\n";

	deque<int> my_deck;

	for (int i = 0; i < 5; ++i)
	{
		my_deck.push_back(i);
		my_deck.push_front(10 - i);
	}

	//my_deck.assign(4, 55);

	deque<int>::iterator it = my_deck.begin();
	it += 4;
	my_deck.insert(it, 55); // insert 55 to index 4;

	// print result
	for (int i = 0; i < my_deck.size(); ++i)
	{
		cout << my_deck[i] << " ";
	}
	cout << "\n========================\n";




	cin.get();
	return 0;
}
