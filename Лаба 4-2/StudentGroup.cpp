#include "StudentGroup.h"

void StudentGroup::PrintGroup()
{

	cout << "Printing group..." << endl << "Group number: " << number << endl;
	cout << "Amount of students: " << size << endl;
	int count = 1;
	for (Student& student : studs)
	{
		cout << count << ". " << student.GetName()<<"  " << student.GetHooky() << endl;
		count += 1;
	}
}

void StudentGroup::AddStudent(Student& student)
{
	studs.push_back(student);
	size += 1;
	cout << "Student has been added" << endl;
	
}

void StudentGroup::RemoveStudent(Student& student)
{
	auto current = find(studs.begin(), studs.end(), student);
	if (current != studs.end()) {
		int position = distance(studs.begin(), current);
		studs.erase(studs.begin() + position);
	}
	size--;
	cout << student.name << " has been removed." << endl;

}

void StudentGroup::SortByHookies()
{
	cout << "Sorting by hookies in process..." << endl;
	Student current;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (studs[j] > studs[j + 1]) {
				current = studs[j];
				studs[j] = studs[j + 1];
				studs[j + 1] = current;
			}

		}

	}
}

void StudentGroup::SortByNames()
{
	cout << "Sorting by the names..." << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (studs[j].GetName() < studs[j + 1].GetName()) {
				continue;
			}
			else {
				Student current = studs[j];
				studs[j] = studs[j + 1];
				studs[j + 1] = current;
			}
		}
	}

}

