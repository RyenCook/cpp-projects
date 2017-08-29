#ifndef REPORT_CARD_H_
#define REPORT_CAR_H_
#include <string>
#include <cstring>

namespace rc {

class ReportCard{
	private:
		int no;
		char grade;
		std::string name;
		double grades[10];
		char calculate(); // calculates grade
	public:
		ReportCard(int t_no, std::string t_name);
		void setGrade(int t_pos, double t_grade); // Set grade in grades[t_pos]
		std::string getName();
		double getGrade(int t_pos); // Get numberical grade in grades[t_pos]
		char getLetterGrade(); // Get final letter grade
};

}

#endif
