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
	size_t position = line.find_first_of("aeiou");
	size_t vowelCount = 0;
	while (position != string::npos){
		vowelCount++;
		position = line.find_first_of("aeiou", position + 1);
	}
	cout << "I counted " << letterCount << " letters" << endl;
	cout << "I counted " << vowelCount << " vowels" << endl;

	position = line.find(" ");
	size_t start = 0;
	while (position != string::npos){
		cout << line.substr(start, position - start) << endl;
		start = position + 1;
		position = line.find(" ", start);
	}
	cout << line.substr(start) << endl;

	return 0;
}
