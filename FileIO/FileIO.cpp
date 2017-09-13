#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream file;
	bool error = false;
	while(error ==false)
	{
		cout << "Input file name" << endl;
		string input;
		// store user input in string input
		cin >> input;
		file.open(input, ios_base::in);
		//file.open("Bazinga.txt", ios_base::out);

		//file.open("famousLines.txt", ios_base::in);
		//file.open("commonAnimeTropes.txt", ios_base::in);

		if (file.fail())
		{
			cerr << "error 404 file not found." << endl;
		}

		string buffer;
		while (getline(file, buffer))
		{
			cout << buffer << endl;
		}

		file.clear();

		file.close();
	}
	while (true)
	{

	}
}