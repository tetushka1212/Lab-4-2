#pragma once
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
private:
	int hooky;
	string name;
	friend class StudentGroup;
public:
	Student(string name = " ", int hooky = 0)
	{
		this->name = name;
		this->hooky = hooky;
	}
	int GetHooky()
	{
		return hooky;
	}

	string GetName() 
	{ 
		return name;
	}

	int SetHooky()
	{
		cout << "Input student's hookies: " << endl;
		cin >> hooky;
		return hooky;
	}
	string SetName()
	{
		cout << "Input student's name: "<<endl;
		cin >> name;
		return name;
		 
	}
	bool operator== (const Student& other) { return this->name == other.name; }
	bool operator> (const Student & other) { return this->hooky > other.hooky; }
	bool operator< (const Student& other) { return this->name < other.name; }

	~Student() {}
};

