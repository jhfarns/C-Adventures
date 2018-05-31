#include <string>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include "networkStudent.h"
#include "degree.h"
#include <iostream>

const std::string studentData[] = {
"A1","John","Smith","John1989@gm ail.com","20","30","35","40","SECURITY",
"A2","Suzan","Erickson","Erickson_1990@gmailcom","19","50","30","40","NETWORK",
"A3","Jack,Napoli","The_lawyer99yahoo.com","19","20","40","33","SOFTWARE",
"A4","Erin","Black","Erin.black@comcast.net","22","50","58","40","SECURITY",
"A5","James","Farnsworth","jfarn13@wgu.edu","23","50","40","33","SOFTWARE"};



void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreePrograms degreeProgram) {
	Student* student = NULL;
	switch (degreeProgram) {
	case SECURITY:
		student = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		break;
	case NETWORK:
		student = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		break;
	case SOFTWARE:
		student = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
		break;
	}

	class_roster_array.push_back(student);
}

void Roster::remove(int studentID) {
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {
		if ((*it)->get_student_ID() == studentID) {
			class_roster_array.erase(it);
			return;
		}
	}
	std::cout << "Error: Student ID does not exist" << std::endl;
}

void Roster::printAll() {
	
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it {
		(*it)->print();
	}

}

int main() {

	Roster classRosterArray[5];

//	system("pause");
	return 0;
}