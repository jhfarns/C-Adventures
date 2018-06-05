#include<string>
#include<iostream>
#include"./student.h"
using namespace std;


//Initialize get functions for student.h file
int Student::get_student_ID() {
	return student_ID;
}

string Student::get_first_name() {
	return first_name;
}

string Student::get_last_name() {
	return last_name;
}

string Student::get_email_address() {
	return email_address;
}

int Student::get_age() {
	return age;
}

int Student::get_num_days() {
	return num_of_days[3];
}

//Initialize set functions for student.h file

void Student::set_student_ID(int param_ID) {
	student_ID = param_ID;
	return;
}

void Student::set_first_name(string param_first) {
	first_name = param_first;
	return;
}

void Student::set_last_name(string param_last) {
	last_name = param_last;
	return;
}

void Student::set_email_address(string param_address) {
	email_address = param_address;
	return;
}

void Student::set_age(int param_age) {
	age = param_age;
	return;
}

void Student::set_num_days(int day_val[]) {
	num_of_days[0] = day_val[0];
	num_of_days[1] = day_val[1];
	num_of_days[2] = day_val[2];
	return;
}

//Constructors
Student::Student() {
	student_ID = 0;
	first_name = "Automatic First";
	last_name = "Automatic Last";
	email_address = "Automatic@email.com";
	age = 0;
	for (int i = 0; i < NUMDAYS; ++i) {
		num_of_days[i] = 0;
	}
}

Student::Student(int param_ID, string param_first, string param_last, string param_email, int param_age, int day_val[]) {
	student_ID = param_ID;
	first_name = param_first;
	last_name = param_last;
	email_address = param_email;
	age = param_age;
	for (int i = 0; i < NUMDAYS; ++i) {
		num_of_days[i] = day_val[i];
	}
}

//Destructor
Student::~Student() {
}

//Virtual Functions
void Student::print() {
	std::cout << student_ID << "\t";
	std::cout << "First Name: " << first_name << "\t";
	std::cout << "Last Name: " << last_name << "\t";
	std::cout << "Age: " << age << "\t";
	std::cout << "daysInCourse: {";
	for (int i = 0; i < NUMDAYS; ++) {
		if (i != 0) {
			std::cout << ",";
		}
		std::cout << num_of_days[i];
	}
	std::cout << "}\t";
	// TODO: degreeePrograamamaamamam

	std::cout << std::endl;

}

void Student::getDegreeProgram() {
	return;
}












