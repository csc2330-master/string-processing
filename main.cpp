#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;


int main() {
	string line;
	cout << "Input a line: ";
	getline(cin, line);
	size_t letterCount = 0;
	for (int i = 0; i < line.size(); ++i) {
		if (line.at(i) != ' ') // subscript operator is OVERLOADED for class string!
			letterCount++;
	}
	cout << "I counted " << letterCount << " letters" << endl;


	return 0;
}
