#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string s;
	cout << "Input the file. Input '%' to stop." << endl;
	getline(cin, s, '%');
	cout << s << endl;
	ofstream output("file.txt");
	if (!output) {
		cout << "Can't open the file.\n";
		return 1;
	}
	output << s << endl;
	return 0;
}