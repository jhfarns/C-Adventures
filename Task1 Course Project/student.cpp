#include<string>
#include"./student.h"
using namespace std;


//Initialize get functions for student.h file
int student::get_student_ID() {
	return student_ID;
}

string student::get_first_name() {
	return first_name;
}

string student::get_last_name() {
	return last_name;
}


string student::get_email_address() {
	return email_address;
}

int student::get_age() {
	return age;
}


int student::get_num_days() {
	return num_of_days[3];
}

//Initialize set functions for student.h file

void student::set_student_ID(int param_ID) {
	student_ID = param_ID;
	return;
}

void student::set_first_name(string param_first) {
	first_name = param_first;
	return;
}

void student::set_last_name(string param_last) {
	last_name = param_last;
	return;
}

void student::set_email_address(string param_address) {
	email_address = param_address;
	return;
}

void student::set_age(int param_age) {
	age = param_age;
	return;
}

void student::set_num_days(int day_val[]) {
	num_of_days[0] = day_val[0];
	num_of_days[1] = day_val[1];
	num_of_days[2] = day_val[2];
	return;
}

//Constructors
student::student() {
	int student_ID = 0;
	string first_name = "Automatic First";
	string last_name = "Automatic Last";
	string email_address = "Automatic@email.com";
	int age = 0;
	int num_of_days[3] = {0,0,0};
	return;
}
student::student(int param_ID, string param_first, string param_last, string param_email, int param_age, int day_val[]) {
	int student_ID = param_ID;
	string first_name = param_first;
	string last_name = param_last;
	string email_address = param_email;
	int age = param_age;
	int num_of_days[3] = {day_val[0], day_val[1], day_val[2]};
	return;
}

//Destructor
student::~student() {
	return;
}

//Virtual Functions
void student::print() {
	return;
}

void student::getDegreeProgram() {
	return;
}












