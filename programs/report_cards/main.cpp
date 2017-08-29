#include <iostream>
#include <string>
#include <cstring>
#include "ReportCard.h"

int main() {
	int no; // student's number
	double input; // input grade
	std::string name; // student's name;

	std::cout << "Enter in the student's number: " << std::flush;
	std::cin >> no;
	std::cout << "Enter in the student's name: " << std::flush;
	std::cin >> name;

	rc::ReportCard card(no, name);
	
	std::cout << "Enter in the grades: " << std::endl;

	for(int i=0; i<10; i++){
		std::cin >> input;
		card.setGrade(i, input);
	}

	std::cout << card.getName() << "'s final grade is a(n) " << card.getLetterGrade() << std::endl;

	return 0;
}
