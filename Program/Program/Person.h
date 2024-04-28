#pragma once
#include <string>
#include <iostream>

using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person();
	Person(string, int);
	Person(const Person&);
	~Person();

	string GetName();
	int GetAge();

	void SetName(string);
	void SetAge(int);

	Person& operator=(const Person&);
	friend istream& operator>>(istream&, Person&);
	friend ostream& operator<<(ostream&, const Person&);

};

class Student: public Person {
protected:
	string subject;
	int grade;
public:
	Student();
	Student(string, int, string, int);
	Student(const Student&);
	~Student();

	string GetSubject();
	int GetGrade();

	void SetSubject(string);
	void SetGrade(int);

	void CheckGrade();

	Student& operator=(const Student&);
	friend istream& operator>>(istream&, Student&);
	friend ostream& operator<<(ostream&, const Student&);

};