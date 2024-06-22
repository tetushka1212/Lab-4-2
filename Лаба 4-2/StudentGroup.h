#pragma once
#include "Student.h"
#include <vector>


class StudentGroup :
	public Student
{
private:
	int number;
	int size;
	
public:
	vector<Student>studs;
	StudentGroup(int number = 0, int size = 0)
	{
		this->number = number;
		this->size = size;
	}
	~StudentGroup() {}
	void PrintGroup();
	void AddStudent(Student& student);
	void RemoveStudent(Student& student);
	void SortByHookies();
	void SortByNames();
	
	
		

};

