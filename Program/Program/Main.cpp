#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	system("chcp 1251>null");

	Student test_student;
	cout << "Created empty Student object" << endl;
	cout << test_student;
	
	cout << "Enter Student object data" << endl;
	cin >> test_student;
	cout << test_student;

	cout << "New Student object copied data from first" << endl;
	Student new_student;
	new_student = test_student;
	cout << new_student;
	new_student.CheckGrade();

	cout << "Student object enterpreted as Person object" << endl;
	Person* test_ptr = &test_student;
	cout << *test_ptr;
	cin >> *test_ptr;
	cout << test_student;

	return 0;
}