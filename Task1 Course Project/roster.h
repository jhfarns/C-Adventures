#pragma once
#include"degree.h"


class Roster {
	public:
		//required set get functions for Roster class
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreePrograms degreeProgram);
		void remove(string studentID);
		void printall();
		void printDaysInCourse(string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);
		
		//Constructor
		Roster();
		Roster(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int dayInCourse2, int daysInCourse3, degreePrograms degreeProgram);
 

		//Deconstructor
		~Roster();

	private:
		string student_ID;
		string first_name;
		string last_name;
		string email_address;
		int var_age;
		int days_in_course_1;
		int days_in_course_2;
		int days_in_course_3;
		degreePrograms degree_program;
};