#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream input;

	input.open("Exercise13_1.txt");

	if (input.fail())
	{
		cout << "File does not exist" << endl;
		cout << "Exit program" << endl;
		return 0;
	}

	int count = 0;

	while (!input.eof())
	{
		input.get();
		count++;
	}

	count--; 

	input.close();

	cout << "Number of characters is " << count << endl;
	return 0;
}