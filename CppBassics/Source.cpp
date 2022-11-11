#include<iostream>
#include<conio.h>
#include<vector>
#include<deque>
#include<list>


using namespace std;



int main()
{

	cout << "Ravesli lesson 197 list\n";

	list<int> my_list;



	my_list.emplace_back(12);
	my_list.emplace_back(1);
	my_list.emplace_back(6);
	my_list.emplace_front(10);
	my_list.emplace_front(22);



	//print
	cout << "The contents of my_list are: \n";
	for (list<int>::iterator it = my_list.begin(); it != my_list.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n=========================\n";

	list<int> first_list(4, 100);
	cout << first_list.size() << endl;
	cout << "The contents of first_list are: \n";

	for (auto it = first_list.begin(); it != first_list.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n=========================\n";

	cout << "constructor init second_list with first_list\n";
	list<int> second_list(first_list.begin(), first_list.end());

	cout << "The contents of second_list are: \n";
	for (auto it = second_list.begin(); it != second_list.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << "\n=========================\n";

	cout << "copy second_list ti third_list " << endl;
	list<int> third_list(second_list);
	// add elements
	cout << "add two elements\n";
	third_list.push_back(12);
	third_list.push_front(11);

	// 
	cout << "Contents of third_list are: \n";

	for (list<int>::iterator it2 = third_list.begin(); it2 != third_list.end(); ++it2)
	{
		cout << *it2 << " ";
	}
	cout << "\n=========================\n";


	cout << "The iterator constructor can also be used to construct from array\n";

	int arr[]{ 3, 6, 1, 44 };
	list<int> fifth_list(arr, arr + sizeof(arr) / sizeof(int));



	cout << "The contents of fifth_list are: \n";
	for (list<int>::iterator it = fifth_list.begin(); it != fifth_list.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << "\n=========================\n";
	cout << "sort fifth_list\n";
	fifth_list.sort();
	cout << "Contents of fifth_list after sort are: \n";
	for (list<int>::iterator it = fifth_list.begin(); it != fifth_list.end(); it++)
	{
		cout << *it << "\t";
	}


	fifth_list.sort();

	cin.get();
	return 0;
}
