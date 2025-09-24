#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
	string name;
	string supname;
	int age;



};
const int SIZE_OF_STUDENTS = 10;




int main()
{

	Student arr[SIZE_OF_STUDENTS];
	int number_of_students;
	cout << "Put much of students(no more " << SIZE_OF_STUDENTS << ")=";
	showMenu(arr, number_of_students);
		return 0;


}
void writefilestudents()
{

}
void InputOneStudent(Student* arr_of_students, int position)
{
	if (position < SIZE_OF_STUDENTS)
	{
		cout << "Name:";
		cin >> arr_of_students[position].name;
		cout << " 2nd Name";
		cin >> arr_of_students[position].supname;
		cout << "Age";
		cin >> arr_of_students[position].age;


	}

}
void addstudent(Student* arr, int number_of_students)
{
	if (number_of_students >= SIZE_OF_STUDENTS)
	{

		cout << "massive is full" << endl;
		return;
	}
	cout << "=== ADD NEW STUDENT ===" << endl;


}
void inputStudents(Student* arr, int number_of_students)
{
	for (int i = 0; i < number_of_students; i++)
	{
		cout << "name =";
		cin >> arr[i].name;

	}

}
void changeStudent(Student* arr, int number_of_students)
{

}
void Showstudents(Student* arr, int number_of_students)
{
	cout << "students are:" << arr[SIZE_OF_STUDENTS].name;
}
void deletestudents(Student* arr, int number_of_students)
{
	for (int i = 0; i < number_of_students; i--)
	{
		cout << "name =";
		cin >> arr[i].name;

	}
}
void showMenu(Student* arr, int number_of_students)

{


	bool flag = true;
	while (flag)
	{
		cout << "\n=== MENU ===\n";
		cout << "1  - put students" << endl;
		cout << "2  - relo" << endl;
		cout << "3  - delete student" << endl;
		cout << "4  - add student" << endl;
		cout << "5  - put all students on visible" << endl;
		
		cout << "0  - Exit" << endl;
		
		
		
	}
	int item;
	cin >> item;

	

	switch (item)
	{
	case 1: inputStudents();
		break;
	case 2: Showstudents();
		
		break;
	case 3: 
		changeStudent();
		break;
	case 4: deletestudents();
		break;
	


	default: cout << "Invalid choice!" << endl;
        }



	




