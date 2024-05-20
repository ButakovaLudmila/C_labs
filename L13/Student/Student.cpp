#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <iomanip>
#include <windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

void  initVect(vector<human*>&);

void initVect(vector<human*>& human) {
	human.push_back(new teacher("Butakova", "Ludmila", "Vladimirovna", 40));
	human.push_back(new student("Ivanov", "Ivan", "Ivanovich", { 2,3,3,1,4,2 }));
	human.push_back(new student("Petrov", "Petr", "Petrovich", { 5,5,5,4,5,4 }));
}

int main()
{
	vector<human*> humans;
	initVect(humans);

	for (human* human : humans) {
		cout << human->printData() << endl;
	}

	return 0;
}
