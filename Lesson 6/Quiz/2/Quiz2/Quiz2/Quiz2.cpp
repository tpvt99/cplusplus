// Quiz2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>

struct Student {
	std::string name;
	int grade;
};

auto inputStudent(Student*, int) -> void;
auto sortStudent(Student*, int) -> void;

int main()
{
	using namespace std;
	int c;
	cout << "How many users you want: ";
	cin >> c;

	Student* students = new Student[c];
	inputStudent(students, c);
	sortStudent(students, c);
	for (Student* student = students; student < students + c; student++) {
		std::cout << student->name << " got a grade of " << student->grade << std::endl;
	}

	delete[]students;

}

void inputStudent(Student* students, int size) {
	for (Student* student = students; student < students + size; student++) {
		while (true) {
			std::string name;
			std::cin >> name;
			std::cin.ignore(32767, '\n');
			student->name = name;
			break;
		}
		while (true) {
			int grade;
			std::cin >> grade;
			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				continue;
			}
			student->grade = grade;
			break;
		}
	}
}

void sortStudent(Student* students, int number) {
	for (Student* student = students; student < students + number-1; student++) {
		for (Student* x = student + 1; x < students + number;x++) {
			if (x->grade > student->grade) {
				int temp = student->grade;
				student->grade = x->grade;
				x->grade = temp;
				std::string tempName = student->name;
				student->name = x->name;
				x->name = tempName;
				//std::swap(student, x);
			}
		}
	}
}