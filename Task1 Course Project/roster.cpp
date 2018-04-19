#include <string>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include "networkStudent.h"
#include "degree.h"
#include <iostream>
const string studentData[5][9] =
{

{"A1","John","Smith","John1989@gm ail.com","20","30","35","40","SECURITY"},
{"A2","Suzan","Erickson","Erickson_1990@gmailcom","19","50","30","40","NETWORK"},
{"A3","Jack,Napoli","The_lawyer99yahoo.com","19","20","40","33","SOFTWARE"},
{"A4","Erin","Black","Erin.black@comcast.net","22","50","58","40","SECURITY"},
{"A5","James","Farnsworth","jfarn13@wgu.edu","23","50","40","33","SOFTWARE"}

};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreePrograms degreeProgram) {
	return;
}

int main() {

	Roster classRosterArray[5];

	for (int i = 0; i < 6; i++) {
		classRosterArray[i].add(studentData[0][0], studentData[0][1], studentData[0][2], studentData[0][3], studentData[0][4], studentData[0][5], studentData[0][6], studentData[0][7], studentData[0][8]);
	}

//	system("pause");
	return 0;
}