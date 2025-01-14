﻿// Лаба 4-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Student.h"
#include "StudentGroup.h"
using namespace std;

int main()
{
	StudentGroup qw(3230, 0);
	qw.PrintGroup();
	Student stud1("Asya");
	Student stud2("Bob", 9);
	Student stud3("Popy", 4);
	Student stud4("Ro", 1);
	
	qw.AddStudent(stud1);
	qw.AddStudent(stud2);
	qw.AddStudent(stud3);
	qw.AddStudent(stud4);
	qw.PrintGroup();
	qw.SortByNames();
	qw.PrintGroup();


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
