#include <iostream>
#include <string>
#include <cstring>
#include "ReportCard.h"

// Private functions
char ReportCard::calculate(){
	char grade = 'S';
	double sum  = 0;
	for(int i=0; i<sizeof(grades)/sizeof(grades[0]); i++){
		sum+=grades[i];
	}

	if(sum > 90.0){
		grade = 'A';
	}else if(sum > 80.0){
		grade = 'B';
	}else if(sum > 70.0){
		grade = 'C';
	}else if(sum > 60.0){
		grade = 'D';
	}else{
		grade = 'F';
	}

	return grade;
}

// Public functions
ReportCard::ReportCard(int t_no, std::string t_name) {
	no = t_no;
	name = t_name;
}

void ReportCard::setGrade(int t_pos, double t_grade) {
	grades[t_pos] = t_grade;
}

std::string ReportCard::getName() {
	return name;
}

double ReportCard::getGrade(int t_pos) {
	return grades[t_pos];
}

char ReportCard::getLetterGrade() {
	return calculate();
}
